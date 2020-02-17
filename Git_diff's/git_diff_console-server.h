diff --git a/console-server.h b/console-server.h
index d6822c5..7b678f9 100644
--- a/console-server.h
+++ b/console-server.h
@@ -137,11 +137,25 @@ uint32_t parse_baud_to_int(speed_t speed);
 speed_t parse_int_to_baud(uint32_t baud);
 int config_parse_logsize(const char *size_str, size_t *size);
 
+const char* get_tty_kname(struct console *console);
+
 /* socket paths */
 extern const char *console_socket_path;
 extern const size_t console_socket_path_len;
 extern const char *console_socket_path_readable;
 
+extern const char *console_socket_path2;
+extern const size_t console_socket_path_len2;
+extern const char *console_socket_path_readable2;
+
+extern const char *console_socket_path3;
+extern const size_t console_socket_path_len3;
+extern const char *console_socket_path_readable3;
+
+extern const char *console_socket_path4;
+extern const size_t console_socket_path_len4;
+extern const char *console_socket_path_readable4;
+
 /* utils */
 int write_buf_to_fd(int fd, const uint8_t *buf, size_t len);
 
