--- components/viz/service/frame_sinks/root_compositor_frame_sink_impl.h.orig	2023-09-17 07:59:53 UTC
+++ components/viz/service/frame_sinks/root_compositor_frame_sink_impl.h
@@ -205,7 +205,7 @@ class VIZ_SERVICE_EXPORT RootCompositorFrameSinkImpl
 
 // TODO(crbug.com/1052397): Revisit the macro expression once build flag switch
 // of lacros-chrome is complete.
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD)
   gfx::Size last_swap_pixel_size_;
 #endif
 