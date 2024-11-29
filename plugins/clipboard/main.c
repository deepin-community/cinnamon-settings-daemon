#define NEW csd_clipboard_manager_new
#define START csd_clipboard_manager_start
#define STOP csd_clipboard_manager_stop
#define MANAGER CsdClipboardManager

// Setting this to TRUE makes the plugin register
// with CSM before starting.
// Setting this to FALSE makes CSM wait for the plugin to be started
// before initializing the next phase.
#define REGISTER_BEFORE_STARTING TRUE

// Setting this to TRUE makes the plugin force GDK_SCALE=1
#define FORCE_GDK_SCALE TRUE

// This plugin must run under x11/xwayland
#define FORCE_X11_BACKEND TRUE

#include "csd-clipboard-manager.h"

#include "daemon-skeleton-gtk.h"
