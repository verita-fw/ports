--- src/3rdparty/chromium/third_party/webrtc/rtc_base/ifaddrs_converter.h.orig	2021-12-15 16:12:54 UTC
+++ src/3rdparty/chromium/third_party/webrtc/rtc_base/ifaddrs_converter.h
@@ -14,6 +14,8 @@
 #if defined(WEBRTC_ANDROID)
 #include "rtc_base/ifaddrs_android.h"
 #else
+#include <sys/types.h>
+#include <sys/socket.h>
 #include <ifaddrs.h>
 #endif  // WEBRTC_ANDROID
 
