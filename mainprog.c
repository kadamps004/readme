#include <gtk/gtk.h>
#include <stdlib.h>
#include "demo.h"
#include "mains.h"

int main(int argc, char *argv[]){
	GtkApplication *app;
	int status, i;
	/*Args *args;
	
	args = (Args *)malloc(sizeof(Args *));
	args->argc = argc;
	
	g_print("%d\n", args->argc);
	for(i = 0; i < argc; i++){
		args->argv[i] = argv[i];
		g_print("%s\n", args->argv[i]);
	}
	*/
	
	app = gtk_application_new("org.gtk.example", G_APPLICATION_FLAGS_NONE);
	g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);
	
	status = g_application_run(G_APPLICATION(app), argc, argv);
	g_object_unref(app);
	
	g_signal_connect(app, "destroy", G_CALLBACK(gtk_main_quit), NULL);
	return status;
}
