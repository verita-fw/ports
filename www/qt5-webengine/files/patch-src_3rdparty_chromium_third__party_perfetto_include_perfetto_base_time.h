--- src/3rdparty/chromium/third_party/perfetto/include/perfetto/base/time.h.orig	2021-12-15 16:12:54 UTC
+++ src/3rdparty/chromium/third_party/perfetto/include/perfetto/base/time.h
@@ -141,6 +141,9 @@ inline TimeNanos GetBootTimeNs() {
 // Return ns from boot. Conversely to GetWallTimeNs, this clock counts also time
 // during suspend (when supported).
 inline TimeNanos GetBootTimeNs() {
+#if PERFETTO_BUILDFLAG(PERFETTO_OS_FREEBSD)
+  return GetTimeInternalNs(kWallTimeClockSource);
+#else
   // Determine if CLOCK_BOOTTIME is available on the first call.
   static const clockid_t kBootTimeClockSource = [] {
     struct timespec ts = {};
@@ -148,6 +151,7 @@ inline TimeNanos GetBootTimeNs() {
     return res == 0 ? CLOCK_BOOTTIME : kWallTimeClockSource;
   }();
   return GetTimeInternalNs(kBootTimeClockSource);
+#endif
 }
 
 inline TimeNanos GetWallTimeNs() {
