inherit cmake

PACKAGECONFIG[dbus] = "-DCOG_DBUS_SYSTEM_BUS=ON -DCOG_DBUS_OWN_USER=${COG_DBUS_OWN_USER},-DCOG_DBUS_SYSTEM_BUS=OFF"
PACKAGECONFIG[drm] = "-DCOG_PLATFORM_DRM=ON,-DCOG_PLATFORM_DRM=OFF,wpebackend-fdo libdrm virtual/libgbm libinput"
PACKAGECONFIG[gtk4] = "-DCOG_PLATFORM_GTK4=ON,-DCOG_PLATFORM_GTK4=OFF,gtk4"
PACKAGECONFIG[headless] = "-DCOG_PLATFORM_HEADLESS=ON,-DCOG_PLATFORM_HEADLESS=OFF,wpebackend-fdo"
PACKAGECONFIG[weston-direct-display] = "-DCOG_WESTON_DIRECT_DISPLAY=ON,-DCOG_WESTON_DIRECT_DISPLAY=OFF,weston"
PACKAGECONFIG[wl] = "-DCOG_PLATFORM_WL=ON,-DCOG_PLATFORM_WL=OFF,wpebackend-fdo"

