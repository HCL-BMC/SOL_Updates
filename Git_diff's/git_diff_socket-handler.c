diff --git a/socket-handler.c b/socket-handler.c
index be7daa4..8c17c07 100644
--- a/socket-handler.c
+++ b/socket-handler.c
@@ -320,15 +320,61 @@ static int socket_init(struct handler *handler, struct console *console,
 
 	memset(&addr, 0, sizeof(addr));
 	addr.sun_family = AF_UNIX;
-	memcpy(&addr.sun_path, &console_socket_path, console_socket_path_len);
 
-	rc = bind(sh->sd, (struct sockaddr *)&addr,
+	if(strcmp(get_tty_kname(console), "ttyS0") == 0)
+	{
+	   memcpy(&addr.sun_path, &console_socket_path, console_socket_path_len);
+
+	   rc = bind(sh->sd, (struct sockaddr *)&addr,
 			sizeof(addr) - sizeof(addr.sun_path) + console_socket_path_len);
-	if (rc) {
+	   if (rc) {
 		warn("Can't bind to socket path %s",
 				console_socket_path_readable);
 		return -1;
+	   }
 	}
+	else if(strcmp(get_tty_kname(console), "ttyS1") == 0)
+        {
+           memcpy(&addr.sun_path, &console_socket_path2, console_socket_path_len2);
+
+           rc = bind(sh->sd, (struct sockaddr *)&addr,
+                        sizeof(addr) - sizeof(addr.sun_path) + console_socket_path_len2);
+           if (rc) {
+                warn("Can't bind to socket path %s",
+                                console_socket_path_readable2);
+                return -1;
+           }
+        }
+	else if(strcmp(get_tty_kname(console), "ttyS2") == 0)
+        {
+           memcpy(&addr.sun_path, &console_socket_path3, console_socket_path_len3);
+
+           rc = bind(sh->sd, (struct sockaddr *)&addr,
+                        sizeof(addr) - sizeof(addr.sun_path) + console_socket_path_len3);
+           if (rc) {
+                warn("Can't bind to socket path %s",
+                                console_socket_path_readable3);
+                return -1;
+           }
+        }
+	else if(strcmp(get_tty_kname(console), "ttyS3") == 0)
+        {
+           memcpy(&addr.sun_path, &console_socket_path4, console_socket_path_len4);
+
+           rc = bind(sh->sd, (struct sockaddr *)&addr,
+                        sizeof(addr) - sizeof(addr.sun_path) + console_socket_path_len4);
+           if (rc) {
+                warn("Can't bind to socket path %s",
+                                console_socket_path_readable4);
+                return -1;
+           }
+        }
+	else
+	{
+             warn("Invalid tty serial");
+             return -1;
+	}
+
 
 	rc = listen(sh->sd, 1);
 	if (rc) {
