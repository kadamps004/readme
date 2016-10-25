#include <gtk/gtk.h>
#include <stdlib.h>
#include "demo.h"
#include "mains.h"
/*
void add_activate_new(GtkApplication *app, gpointer data){
	GtkWidget *window, *grid;
	GtkWidget *label_isbn, *label_bk_name, *label_bk_qty, *label_publisher;
	GtkWidget *txt_isbn, *txt_bk_name, *txt_bk_qty, *txt_publisher;
	GtkWidget *btn_submit;
	
	window = init_window(app);
	gtk_window_set_title(GTK_WINDOW(window), "ADD");
	
	grid = gtk_grid_new();
	gtk_container_add(GTK_CONTAINER(window), grid);
	
	label_isbn = gtk_label_new("ISBN");
	label_bk_name = gtk_label_new("Book Name : ");
	label_bk_qty = gtk_label_new("Book quantity : ");
	label_publisher = gtk_label_new("Publisher : ");
	
	txt_isbn = gtk_entry_new();
	txt_bk_name = gtk_entry_new();
	txt_bk_qty = gtk_entry_new();
	txt_publisher = gtk_entry_new();
	
	gtk_grid_attach(GTK_GRID(grid), label_isbn, 0, 1, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), label_bk_name, 0, 2, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), label_bk_qty, 0, 3, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), label_publisher, 0, 4, 1, 1);
	
	gtk_grid_attach(GTK_GRID(grid), txt_isbn, 1, 1, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), txt_bk_name, 1, 2, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), txt_bk_qty, 1, 3, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), txt_publisher, 1, 4, 1, 1);
	
	btn_submit = gtk_button_new_with_label("SUBMIT");
	gtk_grid_attach(GTK_GRID(grid), btn_submit, 1, 5, 1, 1);
	button_box = gtk_button_box_new(GTK_ORIENTATION_HORIZONTAL);
	gtk_container_add(GTK_CONTAINER(window), button_box);
	
	button_SUBMIT = gtk_button_new_with_label("SUBMIT");
	g_signal_connect(btn_SUBMIT, "clicked", G_CALLBACK(activate), NULL);
	gtk_container_add(GTK_CONTAINER(button_box), btn_SUBMIT);
	
	
	Make all the components visible.
	gtk_widget_show_all(window);	
}*/

//activate action on add button
void add_activate(GtkApplication *app, Window_grid *win_grid){
	GtkWidget *add_grid;
	GtkWidget *label_isbn, *label_bk_name, *label_bk_qty, *label_publisher;
	GtkWidget *txt_isbn, *txt_bk_name, *txt_bk_qty, *txt_publisher;
	GtkWidget *btn_submit;
	GtkWidget *btn_home;
	GtkWidget *prev_grid;
	//gtk_widget_destroy(win_grid->grid);
	//win_grid->grid = NULL;
	//win_grid->grid = gtk_grid_new();
	//gtk_container_add(GTK_CONTAINER(win_grid->window), win_grid->grid);
	//win_grid->grid = NULL;
	//window = init_window(app);
	//gtk_window_set_title(GTK_WINDOW(window), "ADD");
	
	prev_grid = win_grid->grid;
	
	gtk_container_remove(GTK_CONTAINER(win_grid->window), win_grid->grid);
	add_grid = gtk_grid_new();
	gtk_container_add(GTK_CONTAINER(win_grid->window), add_grid);
	win_grid->grid = add_grid;
	label_isbn = gtk_label_new("ISBN");
	label_bk_name = gtk_label_new("Book Name : ");
	label_bk_qty = gtk_label_new("Book quantity : ");
	label_publisher = gtk_label_new("Publisher : ");
	
	txt_isbn = gtk_entry_new();
	txt_bk_name = gtk_entry_new();
	txt_bk_qty = gtk_entry_new();
	txt_publisher = gtk_entry_new();
	
	gtk_grid_attach(GTK_GRID(add_grid), label_isbn, 0, 1, 1, 1);
	gtk_grid_attach(GTK_GRID(add_grid), label_bk_name, 0, 2, 1, 1);
	gtk_grid_attach(GTK_GRID(add_grid), label_bk_qty, 0, 3, 1, 1);
	gtk_grid_attach(GTK_GRID(add_grid), label_publisher, 0, 4, 1, 1);
	
	gtk_grid_attach(GTK_GRID(add_grid), txt_isbn, 1, 1, 1, 1);
	gtk_grid_attach(GTK_GRID(add_grid), txt_bk_name, 1, 2, 1, 1);
	gtk_grid_attach(GTK_GRID(add_grid), txt_bk_qty, 1, 3, 1, 1);
	gtk_grid_attach(GTK_GRID(add_grid), txt_publisher, 1, 4, 1, 1);
	
	btn_submit = gtk_button_new_with_label("SUBMIT");
	gtk_grid_attach(GTK_GRID(add_grid), btn_submit, 1, 5, 1, 1);
	btn_home = gtk_button_new_with_label("HOME");
	g_signal_connect(btn_home, "clicked", G_CALLBACK(activate), win_grid);
	gtk_grid_attach(GTK_GRID(add_grid), btn_home, 0, 5, 1, 1);
	
 	// g_signal_connect_swapped (btn_add, "clicked", G_CALLBACK (gtk_widget_destroy), window);
 	
	/*button_box = gtk_button_box_new(GTK_ORIENTATION_HORIZONTAL);
	gtk_container_add(GTK_CONTAINER(window), button_box);
	
	button_SUBMIT = gtk_button_new_with_label("SUBMIT");
	g_signal_connect(btn_SUBMIT, "clicked", G_CALLBACK(activate), NULL);
	gtk_container_add(GTK_CONTAINER(button_box), btn_SUBMIT);
	
	*/
	/*Make all the components visible.*/
	/*gtk_widget_show(label_isbn);
	gtk_widget_show(label_bk_name);
	gtk_widget_show(label_bk_qty);
	gtk_widget_show(label_publisher);
	
	gtk_widget_show(txt_isbn);
	gtk_widget_show(txt_bk_name);
	gtk_widget_show(txt_bk_qty);
	gtk_widget_show(txt_publisher);
	
	gtk_widget_show(btn_submit);*/
	
	gtk_widget_show_all(win_grid->window);
}

 //activate on view button
void view_activate(GtkApplication *app, Window_grid *win_grid){

	GtkWidget *label_isbn, *label_publisher;
	GtkWidget *txt_isbn, *txt_publisher;
	//GtkWidget *btn_back;
	GtkWidget *view_grid;
	GtkWidget *btn_home;
	GtkWidget *prev_grid;
	GtkWidget *btn_view;
	
	prev_grid = win_grid->grid;
	
	
	

	gtk_container_remove(GTK_CONTAINER(win_grid ->window), win_grid->grid);
	view_grid = gtk_grid_new();
	gtk_container_add(GTK_CONTAINER(win_grid ->window), view_grid);
	win_grid->grid = view_grid;
	
	label_publisher = gtk_label_new("Publisher : ");
	
	txt_publisher = gtk_entry_new();
	
	gtk_grid_attach(GTK_GRID(view_grid), label_publisher, 0, 1, 1, 1);
	
	gtk_grid_attach(GTK_GRID(view_grid), txt_publisher, 1, 1, 1, 1);
	
	
	btn_home = gtk_button_new_with_label("HOME");
	g_signal_connect(btn_home, "clicked", G_CALLBACK(activate), win_grid);
	gtk_grid_attach(GTK_GRID(view_grid), btn_home, 1,2,1,1);
	btn_view = gtk_button_new_with_label("VIEW");
	gtk_grid_attach(GTK_GRID(view_grid), btn_view, 1, 3, 1, 1);
	

	//btn_back = gtk_button_new_with_label("BACK");
	//gtk_grid_attach(GTK_GRID(add_grid), btn_back, 1, 2, 1, 1);
	/*Make all the components visible.*/
	gtk_widget_show_all(win_grid->window);	
	
}

//activate function for remove button
void remove_activate(GtkApplication *app, Window_grid *win_grid){
	GtkWidget *window, *grid;
	GtkWidget *label_isbn, *label_bk_name;
	GtkWidget *txt_isbn, *txt_bk_name;
	//GtkWidget *btn_back;
	GtkWidget *removedata_grid;
	GtkWidget *btn_home;
	GtkWidget *prev_grid;
	GtkWidget *btn_removedata;
	
	prev_grid = win_grid->grid;
	
	
	gtk_container_remove(GTK_CONTAINER(win_grid ->window), win_grid->grid);
	removedata_grid = gtk_grid_new();
	gtk_container_add(GTK_CONTAINER(win_grid ->window), removedata_grid);
	win_grid->grid = removedata_grid;
	label_isbn = gtk_label_new("ISBN");
	
	txt_isbn = gtk_entry_new();
	
	gtk_grid_attach(GTK_GRID(removedata_grid), label_isbn, 0, 1, 1, 1);
	
	gtk_grid_attach(GTK_GRID(removedata_grid), txt_isbn, 1, 1, 1, 1);
	
	//btn_back = gtk_button_new_with_label("BACK");
	//gtk_grid_attach(GTK_GRID(add_grid), btn_back, 1, 2, 1, 1);

	/*Make all the components visible.*/
	btn_home = gtk_button_new_with_label("HOME");
	g_signal_connect(btn_home, "clicked", G_CALLBACK(activate), win_grid);
	gtk_grid_attach(GTK_GRID(removedata_grid), btn_home, 1, 2, 1, 1);
	
	btn_removedata = gtk_button_new_with_label("REMOVE");
	gtk_grid_attach(GTK_GRID(removedata_grid), btn_removedata, 1, 3, 1, 1);
	gtk_widget_show_all(win_grid->window);	
	
}

//activate function for search
void search_activate(GtkApplication *app, Window_grid *win_grid){
	GtkWidget *window, *grid;
	GtkWidget *txt_isbn;
	GtkWidget *label_isbn;
	//GtkWidget *btn_back;
	GtkWidget *search_grid;
	GtkWidget *prev_grid;
	GtkWidget *btn_home;
	GtkWidget *btn_search;
	prev_grid = win_grid->grid;
	
	
	gtk_container_remove(GTK_CONTAINER(win_grid ->window), win_grid->grid);
	search_grid =gtk_grid_new();
	win_grid->grid = search_grid;
	gtk_container_add(GTK_CONTAINER(win_grid ->window), search_grid);
	
	label_isbn = gtk_label_new("ISBN");

	txt_isbn = gtk_entry_new();
	
	gtk_grid_attach(GTK_GRID(search_grid), label_isbn, 0, 1, 1, 1);
	
	gtk_grid_attach(GTK_GRID(search_grid), txt_isbn, 1, 1, 1, 1);
	
	//btn_back = gtk_button_with_new_label("BACK");
	//gtk_grid_attach(GTK_GRID(add_grid), btn_back, 1 ,2, 1, 1);
	/*Make all the components visible.*/
	
	btn_home = gtk_button_new_with_label("HOME");
	g_signal_connect(btn_home, "clicked", G_CALLBACK(activate), win_grid);
	gtk_grid_attach(GTK_GRID(search_grid), btn_home, 0, 2, 1, 1);
	
	btn_search = gtk_button_new_with_label("SEARCH");
	gtk_grid_attach(GTK_GRID(search_grid), btn_search, 0, 3, 1, 1);
	
	
	
	gtk_widget_show_all(win_grid->window);	
	
}

