--- media/base/media_switches.h.orig	2023-02-01 18:43:22 UTC
+++ media/base/media_switches.h
@@ -252,7 +252,7 @@ MEDIA_EXPORT BASE_DECLARE_FEATURE(kUseDecoderStreamFor
 MEDIA_EXPORT BASE_DECLARE_FEATURE(kUseFakeDeviceForMediaStream);
 MEDIA_EXPORT BASE_DECLARE_FEATURE(kUseMediaHistoryStore);
 MEDIA_EXPORT BASE_DECLARE_FEATURE(kUseR16Texture);
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 MEDIA_EXPORT BASE_DECLARE_FEATURE(kVaapiVideoDecodeLinux);
 MEDIA_EXPORT BASE_DECLARE_FEATURE(kVaapiVideoDecodeLinuxGL);
 MEDIA_EXPORT BASE_DECLARE_FEATURE(kVaapiVideoEncodeLinux);
@@ -352,11 +352,11 @@ MEDIA_EXPORT BASE_DECLARE_FEATURE(
     kAllowClearDolbyVisionInMseWhenPlatformEncryptedDvEnabled);
 #endif
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 MEDIA_EXPORT BASE_DECLARE_FEATURE(kUseOutOfProcessVideoDecoding);
 #endif  // BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 MEDIA_EXPORT BASE_DECLARE_FEATURE(kUseOutOfProcessVideoEncoding);
 #endif  // BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
 