#include <gtk/gtk.h>
#include <stdlib.h>
#include "demo.h"
#include "mains.h"

GtkWidget *init_window(GtkApplication *app){
	GtkWidget *window;
	window = gtk_application_window_new(app);
	gtk_container_set_border_width(GTK_CONTAINER(window), 10);
	gtk_window_set_resizable(GTK_WINDOW(window), FALSE);
	return window;
}

void activate (GtkApplication *app, Window_grid *win_grid) {
	//creating four buttons and performing action on those.
	//GtkWidget *menu_window;
	GtkWidget *btn_add, *btn_edit, *btn_view, *btn_search, *btn_removedata;
  	GtkWidget *menu_grid;
  	
  	Window_grid *menu;
  	
  	if(!win_grid){
  		menu = (Window_grid *)malloc(sizeof(Window_grid));
  	
		//first button	
 		menu->window = init_window(app);
 		menu->grid = gtk_grid_new();
		gtk_container_add(GTK_CONTAINER(menu->window), menu->grid);
	}
	else{
		menu = win_grid;
		gtk_container_remove(GTK_CONTAINER(menu->window), menu->grid);
		menu_grid = gtk_grid_new();
		gtk_container_add(GTK_CONTAINER(menu->window), menu_grid);
		menu->grid = menu_grid;
		
	}
 	//button_box = gtk_button_box_new (GTK_ORIENTATION_HORIZONTAL);
 	//gtk_container_add (GTK_CONTAINER (menu_window), button_box);
	
 	btn_add = gtk_button_new_with_label ("ADD BOOK");
 	g_signal_connect (btn_add, "clicked", G_CALLBACK(add_activate), menu);
 	// g_signal_connect_swapped (btn_add, "clicked", G_CALLBACK (gtk_widget_destroy), window);
 	gtk_grid_attach(GTK_GRID(menu->grid), btn_add, 0, 0, 1, 1);
 	 
 	 //second button
	
 	 /*button = gtk_button_new_with_label ("EDIT");
	 /*btn = gtk_button_box_new (GTK_ORIENTATION_HORIZONTAL);
 	 g_signal_connect (button, "clicked", G_CALLBACK(Edit_activate), NULL);
 	 g_signal_connect_swapped (button, "clicked", G_CALLBACK (gtk_widget_destroy), window);
 	 gtk_container_add (GTK_CONTAINER (button_box), button);*/
	
	//third button
  	/*gtk_container_add (GTK_CONTAINER (window), button_box);*/
  	btn_search = gtk_button_new_with_label ("SEARCH BOOK");
  	g_signal_connect (btn_search, "clicked", G_CALLBACK(search_activate), menu);
  	//g_signal_connect_swapped (btn_search, "clicked", G_CALLBACK (gtk_widget_destroy), &menu);
  	gtk_grid_attach(GTK_GRID(menu->grid), btn_search, 0, 2, 1, 1);
 		 
 		 
 	
 	/*button_box = gtk_button_box_new (GTK_ORIENTATION_HORIZONTAL);
  	gtk_container_add (GTK_CONTAINER (window), button_box);*/
	
  	btn_removedata = gtk_button_new_with_label ("REMOVE BOOK");
  	g_signal_connect (btn_removedata, "clicked", G_CALLBACK(remove_activate), menu);
  	//g_signal_connect_swapped (btn_remove, "clicked", G_CALLBACK (gtk_widget_destroy), &menu);
  	gtk_grid_attach(GTK_GRID(menu->grid), btn_removedata, 0, 3, 1, 1);
  	
  	//fourth button
  	btn_view = gtk_button_new_with_label ("VIEW BOOK");
  	g_signal_connect (btn_view, "clicked", G_CALLBACK(view_activate), menu);
  	//g_signal_connect_swapped (btn_view, "clicked", G_CALLBACK (gtk_widget_destroy), &menu);
  	gtk_grid_attach(GTK_GRID(menu->grid), btn_view, 0, 4, 1, 1);
 		 
 		
 	 gtk_widget_show_all(menu->window);
}			
