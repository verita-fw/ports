--- sample/test/TestRange.cs.orig	2016-09-21 11:49:20 UTC
+++ sample/test/TestRange.cs
@@ -32,14 +32,14 @@ namespace WidgetViewer {
 
 			HScale hscale = new HScale (adjustment);
 			hscale.SetSizeRequest (150, -1);
-			((Range) hscale).UpdatePolicy = UpdateType.Delayed;
+			((Gtk.Range) hscale).UpdatePolicy = UpdateType.Delayed;
 
 			hscale.Digits = 1;
 			hscale.DrawValue = true;
 			box2.PackStart (hscale, true, true, 0);
 
 			HScrollbar hscrollbar = new HScrollbar (adjustment);
-			((Range) hscrollbar).UpdatePolicy = UpdateType.Continuous;
+			((Gtk.Range) hscrollbar).UpdatePolicy = UpdateType.Continuous;
 			box2.PackStart (hscrollbar, true, true, 0);
 
 			hscale = new HScale (adjustment);
@@ -59,7 +59,7 @@ namespace WidgetViewer {
 			vscale.SetSizeRequest (-1, 200);
 			vscale.Digits = 2;
 			vscale.DrawValue = true;
-			((Range) vscale).Inverted = true;
+			((Gtk.Range) vscale).Inverted = true;
 			hbox.PackStart (vscale, true, true, 0);
 
 			vscale = new VScale (adjustment);
