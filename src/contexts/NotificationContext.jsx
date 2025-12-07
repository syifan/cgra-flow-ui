import { createContext, useContext, useState, useCallback, useRef } from 'react';
import {
  Snackbar,
  Alert,
  Dialog,
  DialogTitle,
  DialogContent,
  DialogContentText,
  DialogActions,
  Button
} from '@mui/material';

const NotificationContext = createContext(null);

export function NotificationProvider({ children }) {
  const [notification, setNotification] = useState({
    open: false,
    message: '',
    severity: 'info'
  });

  const [confirmDialog, setConfirmDialog] = useState({
    open: false,
    title: '',
    message: '',
    confirmText: 'Confirm',
    cancelText: 'Cancel',
    confirmColor: 'primary'
  });

  const confirmResolveRef = useRef(null);

  const showNotification = useCallback((message, severity = 'info') => {
    setNotification({ open: true, message, severity });
  }, []);

  const showError = useCallback(
    (message) => {
      showNotification(message, 'error');
    },
    [showNotification]
  );

  const showSuccess = useCallback(
    (message) => {
      showNotification(message, 'success');
    },
    [showNotification]
  );

  const showWarning = useCallback(
    (message) => {
      showNotification(message, 'warning');
    },
    [showNotification]
  );

  const showInfo = useCallback(
    (message) => {
      showNotification(message, 'info');
    },
    [showNotification]
  );

  const showConfirm = useCallback(
    ({
      title = 'Confirm',
      message,
      confirmText = 'Confirm',
      cancelText = 'Cancel',
      confirmColor = 'primary'
    }) => {
      return new Promise((resolve) => {
        confirmResolveRef.current = resolve;
        setConfirmDialog({
          open: true,
          title,
          message,
          confirmText,
          cancelText,
          confirmColor
        });
      });
    },
    []
  );

  const handleClose = useCallback((event, reason) => {
    if (reason === 'clickaway') return;
    setNotification((prev) => ({ ...prev, open: false }));
  }, []);

  const handleConfirmClose = useCallback((confirmed) => {
    setConfirmDialog((prev) => ({ ...prev, open: false }));
    if (confirmResolveRef.current) {
      confirmResolveRef.current(confirmed);
      confirmResolveRef.current = null;
    }
  }, []);

  return (
    <NotificationContext.Provider
      value={{
        showNotification,
        showError,
        showSuccess,
        showWarning,
        showInfo,
        showConfirm
      }}
    >
      {children}
      <Snackbar
        open={notification.open}
        autoHideDuration={6000}
        onClose={handleClose}
        anchorOrigin={{ vertical: 'bottom', horizontal: 'center' }}
      >
        <Alert
          onClose={handleClose}
          severity={notification.severity}
          variant="filled"
          sx={{ width: '100%' }}
        >
          {notification.message}
        </Alert>
      </Snackbar>
      <Dialog
        open={confirmDialog.open}
        onClose={() => handleConfirmClose(false)}
        aria-labelledby="confirm-dialog-title"
        aria-describedby="confirm-dialog-description"
      >
        <DialogTitle id="confirm-dialog-title">{confirmDialog.title}</DialogTitle>
        <DialogContent>
          <DialogContentText id="confirm-dialog-description">
            {confirmDialog.message}
          </DialogContentText>
        </DialogContent>
        <DialogActions>
          <Button onClick={() => handleConfirmClose(false)}>{confirmDialog.cancelText}</Button>
          <Button
            onClick={() => handleConfirmClose(true)}
            color={confirmDialog.confirmColor}
            variant="contained"
            autoFocus
          >
            {confirmDialog.confirmText}
          </Button>
        </DialogActions>
      </Dialog>
    </NotificationContext.Provider>
  );
}

export function useNotification() {
  const context = useContext(NotificationContext);
  if (!context) {
    throw new Error('useNotification must be used within a NotificationProvider');
  }
  return context;
}
