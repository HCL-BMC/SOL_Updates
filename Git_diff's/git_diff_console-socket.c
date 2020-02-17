diff --git a/console-socket.c b/console-socket.c
index 9e1cf30..8e1019b 100644
--- a/console-socket.c
+++ b/console-socket.c
@@ -16,7 +16,21 @@
 
 #include <sys/types.h>
 
-const char console_socket_path[] = "\0obmc-console";
+const char console_socket_path[] = "\0obmc-console-1";
 const size_t console_socket_path_len = sizeof(console_socket_path) - 1;
 const char *console_socket_path_readable = console_socket_path + 1;
 
+
+const char console_socket_path2[] = "\0obmc-console-2";
+const size_t console_socket_path_len2 = sizeof(console_socket_path2) - 1;
+const char *console_socket_path_readable2 = console_socket_path2 + 1;
+
+
+const char console_socket_path3[] = "\0obmc-console-3";
+const size_t console_socket_path_len3 = sizeof(console_socket_path3) - 1;
+const char *console_socket_path_readable3 = console_socket_path3 + 1;
+
+
+const char console_socket_path4[] = "\0obmc-console-4";
+const size_t console_socket_path_len4 = sizeof(console_socket_path4) - 1;
+const char *console_socket_path_readable4 = console_socket_path4 + 1;
