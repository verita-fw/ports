--- src/dialogs/confdialog.cxx.orig	2023-08-31 22:56:35 UTC
+++ src/dialogs/confdialog.cxx
@@ -7790,7 +7790,7 @@ progdefaults.cmedia_ptt = false;
 btn_init_cmedia_PTT->redraw();
 } else {
 progdefaults.cmedia_ptt = false;
-close_cmedia();
+//close_cmedia();
 }
 progdefaults.changed = true;
 }
@@ -7798,7 +7798,7 @@ static void cb_inp_cmedia_dev(Fl_ComboBox* o, void*) {
 Fl_ComboBox *inp_cmedia_dev=(Fl_ComboBox *)0;
 
 static void cb_inp_cmedia_dev(Fl_ComboBox* o, void*) {
-  close_cmedia();
+//  close_cmedia();
 progdefaults.cmedia_device = o->value();
 btn_init_cmedia_PTT->labelcolor(FL_RED);
 btn_init_cmedia_PTT->redraw();
@@ -7822,7 +7822,7 @@ static void cb_btn_test_cmedia(Fl_Button*, void*) {
 Fl_Button *btn_test_cmedia=(Fl_Button *)0;
 
 static void cb_btn_test_cmedia(Fl_Button*, void*) {
-  test_hid_ptt();
+//  test_hid_ptt();
 }
 
 Fl_File_Input *inp_wav_fname_regex=(Fl_File_Input *)0;
