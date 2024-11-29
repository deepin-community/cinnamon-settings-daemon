#define NEW csd_wacom_manager_new
#define START csd_wacom_manager_start
#define STOP csd_wacom_manager_stop
#define MANAGER CsdWacomManager

// Setting this to TRUE makes the plugin register
// with CSM before starting.
// Setting this to FALSE makes CSM wait for the plugin to be started
// before initializing the next phase.
#define REGISTER_BEFORE_STARTING TRUE

// Setting this to TRUE makes the plugin force GDK_SCALE=1
#define FORCE_GDK_SCALE TRUE

#include "csd-wacom-manager.h"

#include "daemon-skeleton-gtk.h"
