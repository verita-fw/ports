--- src/3rdparty/chromium/media/base/media_switches.h.orig	2023-03-28 19:45:02 UTC
+++ src/3rdparty/chromium/media/base/media_switches.h
@@ -214,7 +214,7 @@ MEDIA_EXPORT BASE_DECLARE_FEATURE(kUseR16Texture);
 MEDIA_EXPORT BASE_DECLARE_FEATURE(kUseFakeDeviceForMediaStream);
 MEDIA_EXPORT BASE_DECLARE_FEATURE(kUseMediaHistoryStore);
 MEDIA_EXPORT BASE_DECLARE_FEATURE(kUseR16Texture);
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 MEDIA_EXPORT BASE_DECLARE_FEATURE(kVaapiVideoDecodeLinux);
 MEDIA_EXPORT BASE_DECLARE_FEATURE(kVaapiVideoEncodeLinux);
 MEDIA_EXPORT BASE_DECLARE_FEATURE(kVaapiIgnoreDriverChecks);
@@ -319,11 +319,11 @@ MEDIA_EXPORT BASE_DECLARE_FEATURE(kDeprecateLowUsageCo
 MEDIA_EXPORT BASE_DECLARE_FEATURE(kDeprecateLowUsageCodecs);
 #endif
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 MEDIA_EXPORT BASE_DECLARE_FEATURE(kUseOutOfProcessVideoDecoding);
 #endif  // BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 MEDIA_EXPORT BASE_DECLARE_FEATURE(kUseOutOfProcessVideoEncoding);
 #endif  // BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
 
