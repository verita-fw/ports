# Description: A non-invasive partial backport of the Python3 distutils behaviour.
# This allows Python's scripts to be properly suffixed (similar to Python 3.x) on
# installation.
# Submitted by: mva

--- Lib/distutils/command/build_scripts.py.orig	2023-02-04 10:09:53 UTC
+++ Lib/distutils/command/build_scripts.py
@@ -126,6 +126,9 @@ class build_scripts (Command):
                                  file, oldmode, newmode)
                         os.chmod(file, newmode)
 
+        # XXX should we modify self.outfiles?
+        return outfiles
+
     # copy_scripts ()
 
 # class build_scripts
