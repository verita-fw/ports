--- greenbone/feed/sync/config.py	2023-09-21 01:01:53.391475000 -0500
+++ greenbone/feed/sync/config.py	2023-09-21 01:02:58.557438000 -0500
@@ -69,10 +69,10 @@
 DEFAULT_GVMD_LOCK_FILE_PATH = "gvm/feed-update.lock"
 DEFAULT_OPENVAS_LOCK_FILE_PATH = "openvas/feed-update.lock"
 
-DEFAULT_CONFIG_FILE = "/etc/gvm/greenbone-feed-sync.toml"
+DEFAULT_CONFIG_FILE = "%%LOCALBASE%%/etc/gvm/greenbone-feed-sync.toml"
 DEFAULT_USER_CONFIG_FILE = "~/.config/greenbone-feed-sync.toml"
 
-DEFAULT_ENTERPRISE_KEY_PATH = "/etc/gvm/greenbone-enterprise-feed-key"
+DEFAULT_ENTERPRISE_KEY_PATH = "%%LOCALBASE%%/etc/gvm/greenbone-enterprise-feed-key"
 
 DEFAULT_GROUP = "gvm"
 DEFAULT_USER = "gvm"
