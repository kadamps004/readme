project: demo.h demo.c mains.h mains.c mainprog.c 
	gcc mainprog.c demo.c mains.c -o project `pkg-config --cflags --libs gtk+-3.0`
