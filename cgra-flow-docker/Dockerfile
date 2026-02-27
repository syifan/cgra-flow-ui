# CGRA Flow Docker Image
#
# Build strategy:
#   1. Build base image with LLVM (slow, cached):
#      docker build -t cgra-flow-base --target llvm-base .
#   2. Build full image (fast, uses cached base):
#      docker build -t cgra-flow .
#
# Or just build everything at once (first time is slow):
#      docker build -t cgra-flow .

# ============================================
# Stage 1: LLVM/MLIR Base (slow to build, rarely changes)
# ============================================
FROM ubuntu:24.04 AS llvm-base

# Avoid interactive prompts during package installation
ENV DEBIAN_FRONTEND=noninteractive

# Install system dependencies
RUN apt-get update && apt-get install -y \
    build-essential \
    cmake \
    ninja-build \
    clang \
    lld \
    ccache \
    git \
    wget \
    graphviz \
    make \
    autoconf \
    g++ \
    libfl-dev \
    bison \
    libffi-dev \
    python3.12 \
    python3.12-venv \
    python3.12-dev \
    && rm -rf /var/lib/apt/lists/*

# Create working directory
WORKDIR /cgra

# Clone and build LLVM/MLIR
# Commit 6146a88 is a known working version for CGRA dataflow compilation
# Full SHA: 6146a88e0b09a52025e7e1cb0adbf5dce4538b64 (LLVM ~18.x development)
# This specific commit is required for compatibility with the dataflow project
RUN git clone https://github.com/llvm/llvm-project.git && \
    cd llvm-project && \
    git checkout 6146a88 && \
    mkdir build

WORKDIR /cgra/llvm-project/build

RUN cmake -G Ninja ../llvm \
    -DLLVM_ENABLE_PROJECTS="mlir;clang" \
    -DLLVM_BUILD_EXAMPLES=OFF \
    -DLLVM_TARGETS_TO_BUILD="Native" \
    -DCMAKE_BUILD_TYPE=Release \
    -DLLVM_ENABLE_ASSERTIONS=ON \
    -DCMAKE_C_COMPILER=clang \
    -DCMAKE_CXX_COMPILER=clang++ \
    -DCMAKE_CXX_STANDARD=17 \
    -DCMAKE_CXX_FLAGS="-std=c++17 -frtti" \
    -DLLVM_ENABLE_LLD=ON \
    -DMLIR_INSTALL_AGGREGATE_OBJECTS=ON \
    -DLLVM_ENABLE_RTTI=ON \
    -DCMAKE_C_COMPILER_LAUNCHER=ccache \
    -DCMAKE_CXX_COMPILER_LAUNCHER=ccache

RUN cmake --build . --target clang llvm-extract mlir-translate FileCheck check-mlir

# Add LLVM tools to PATH
ENV PATH="/cgra/llvm-project/build/bin:${PATH}"

# ============================================
# Stage 2: Full image (faster to rebuild)
# ============================================
FROM llvm-base AS final

WORKDIR /cgra

# Install Verilator 4.036
# This specific version is required for compatibility with pymtl3.1
# Newer versions have breaking API changes that affect VectorCGRA simulation
# Pinned to commit c6f5151 for reproducible builds
RUN wget https://github.com/tancheng/pymtl-verilator/raw/c6f515121248acc3cbe91eb40b293e7734c5023f/verilator-travis-4.036.tar.gz && \
    tar -xzf verilator-travis-4.036.tar.gz && \
    rm verilator-travis-4.036.tar.gz

# Set Verilator environment variables
ENV VERILATOR_ROOT=/cgra/verilator
ENV PYMTL_VERILATOR_INCLUDE_DIR=/cgra/verilator/share/verilator/include
ENV PATH="${PATH}:/cgra/verilator/bin"

# Clone and build dataflow
# Pinned to commit 79d9d8debc6311ef1d4351d77f19ab446d583786 for reproducible builds and supply chain security
RUN git clone https://github.com/coredac/dataflow.git && \
    cd dataflow && \
    git checkout 79d9d8debc6311ef1d4351d77f19ab446d583786 && \
    git submodule update --init --recursive && \
    cd /cgra && \
    mkdir dataflow/build

WORKDIR /cgra/dataflow/build

RUN cmake -G Ninja .. \
    -DLLVM_DIR=/cgra/llvm-project/build/lib/cmake/llvm \
    -DMLIR_DIR=/cgra/llvm-project/build/lib/cmake/mlir \
    -DMLIR_SOURCE_DIR=/cgra/llvm-project/mlir \
    -DMLIR_BINARY_DIR=/cgra/llvm-project/build \
    -DCMAKE_CXX_FLAGS="-std=c++17" && \
    ninja

WORKDIR /cgra

# Clone VectorCGRA with submodules
RUN git clone --recursive https://github.com/tancheng/VectorCGRA.git

# Set up Python virtual environment and install dependencies
RUN python3.12 -m venv /cgra/venv
ENV PATH="/cgra/venv/bin:${PATH}"
ENV VIRTUAL_ENV="/cgra/venv"

# py==1.11.0 is required by older pytest versions used in pymtl3
# pymtl3.1@yo-struct-list-fix includes fixes for struct list handling in VectorCGRA
RUN pip install --upgrade pip && \
    pip install py==1.11.0 && \
    pip install wheel && \
    pip install -U git+https://github.com/tancheng/pymtl3.1@yo-struct-list-fix && \
    pip install hypothesis && \
    pip install pytest && \
    pip install py-markdown-table && \
    pip install pyyaml

# Set default working directory
WORKDIR /cgra

# Default command
CMD ["/bin/bash"]
