--- ui/native_theme/native_theme_base.cc.orig	2023-09-13 12:11:42 UTC
+++ ui/native_theme/native_theme_base.cc
@@ -274,7 +274,7 @@ void NativeThemeBase::Paint(cc::PaintCanvas* canvas,
       break;
 // TODO(crbug.com/1052397): Revisit the macro expression once build flag switch
 // of lacros-chrome is complete.
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD)
     case kFrameTopArea:
       PaintFrameTopArea(canvas, state, rect, extra.frame_top_area,
                         color_scheme);
