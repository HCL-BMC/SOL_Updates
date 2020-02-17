diff --git a/console-server.c b/console-server.c
index d814dff..b1d570f 100644
--- a/console-server.c
+++ b/console-server.c
@@ -770,6 +770,11 @@ static const struct option options[] = {
 	{ 0,  0, 0, 0},
 };
 
+const char* get_tty_kname(struct console *console)
+{
+	return console->tty_kname;
+}
+
 int main(int argc, char **argv)
 {
 	const char *config_filename = NULL;
