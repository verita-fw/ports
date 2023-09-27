--- src/3rdparty/chromium/third_party/crashpad/crashpad/util/misc/uuid.cc.orig	2022-09-26 10:05:50 UTC
+++ src/3rdparty/chromium/third_party/crashpad/crashpad/util/misc/uuid.cc
@@ -101,7 +101,7 @@ bool UUID::InitializeWithNew() {
   InitializeFromBytes(uuid);
   return true;
 #elif BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || \
-    BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
   // Linux, Android, and Fuchsia do not provide a UUID generator in a
   // widely-available system library. On Linux and Android, uuid_generate()
   // from libuuid is not available everywhere.