diff --git a/console-client.c b/console-client.c
index 052ece2..b51b4ba 100644
--- a/console-client.c
+++ b/console-client.c
@@ -206,7 +206,7 @@ static int client_tty_init(struct console_client *client)
 	return 0;
 }
 
-static int client_init(struct console_client *client)
+static int client_init(struct console_client *client, char *host_name)
 {
 	struct sockaddr_un addr;
 	int rc;
@@ -219,10 +219,41 @@ static int client_init(struct console_client *client)
 
 	memset(&addr, 0, sizeof(addr));
 	addr.sun_family = AF_UNIX;
-	memcpy(&addr.sun_path, &console_socket_path, console_socket_path_len);
 
-	rc = connect(client->console_sd, (struct sockaddr *)&addr,
+	if(strcmp(host_name, "slot1") == 0)
+	{
+	    memcpy(&addr.sun_path, &console_socket_path, console_socket_path_len);
+
+	    rc = connect(client->console_sd, (struct sockaddr *)&addr,
 			sizeof(addr) - sizeof(addr.sun_path) + console_socket_path_len);
+	}
+	else if(strcmp(host_name, "slot2") == 0)
+	{
+            memcpy(&addr.sun_path, &console_socket_path2, console_socket_path_len2);
+
+            rc = connect(client->console_sd, (struct sockaddr *)&addr,
+                        sizeof(addr) - sizeof(addr.sun_path) + console_socket_path_len2);
+	}
+	else if(strcmp(host_name, "slot3") == 0)
+	{
+            memcpy(&addr.sun_path, &console_socket_path3, console_socket_path_len3);
+
+            rc = connect(client->console_sd, (struct sockaddr *)&addr,
+                        sizeof(addr) - sizeof(addr.sun_path) + console_socket_path_len3);
+	}
+	else if(strcmp(host_name, "slot4") == 0)
+	{
+            memcpy(&addr.sun_path, &console_socket_path4, console_socket_path_len4);
+
+            rc = connect(client->console_sd, (struct sockaddr *)&addr,
+                        sizeof(addr) - sizeof(addr.sun_path) + console_socket_path_len4);
+	}
+	else
+	{
+		warn("Invalid host name");
+		return -1;
+	}
+
 	if (rc) {
 		warn("Can't connect to console server");
 		close(client->console_sd);
@@ -273,7 +304,7 @@ int main(int argc, char *argv[])
 		}
 	}
 
-	rc = client_init(client);
+	rc = client_init(client, argv[1]);
 	if (rc)
 		return EXIT_FAILURE;
 
