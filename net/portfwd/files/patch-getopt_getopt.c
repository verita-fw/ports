--- getopt/getopt.c.orig	2023-06-28 09:07:29 UTC
+++ getopt/getopt.c
@@ -40,6 +40,7 @@
 #endif
 
 #include <stdio.h>
+#include <string.h>
 
 /* Comment out all this code if we are using the GNU C Library, and are not
    actually compiling the library itself.  This code is part of the GNU C
