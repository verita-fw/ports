--- src/3rdparty/chromium/ui/base/dragdrop/os_exchange_data_provider_factory.cc.orig	2021-12-15 16:12:54 UTC
+++ src/3rdparty/chromium/ui/base/dragdrop/os_exchange_data_provider_factory.cc
@@ -7,7 +7,7 @@
 #include "base/notreached.h"
 #include "build/build_config.h"
 
-#if defined(OS_LINUX) || defined(OS_CHROMEOS)
+#if defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_BSD)
 #include "ui/base/dragdrop/os_exchange_data_provider_non_backed.h"
 #include "ui/base/ui_base_features.h"
 #if defined(USE_OZONE)
@@ -51,7 +51,7 @@ OSExchangeDataProviderFactory::CreateProvider() {
 // static
 std::unique_ptr<OSExchangeDataProvider>
 OSExchangeDataProviderFactory::CreateProvider() {
-#if defined(OS_LINUX) || defined(OS_CHROMEOS)
+#if defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_BSD)
   if (features::IsUsingOzonePlatform())
     return CreateProviderForLinux();
 #if defined(USE_X11)
