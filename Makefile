CFLAGS = -Wno-implicit-function-declaration

all: final

final:
	echo "Compiling final"
	gcc $(CFLAGS) main.o beg_insert.o last_insert.o random_insert.o begin_delete.o last_delete.o random_delete.o search.o display.o -o final
	chmod +x final


main.o: main.c
	echo "Compiling main"
	gcc $(CFLAGS) -c main.c

beg_insert.o: beg_insert.c
	echo "Compiling beg_insert"
	gcc $(CFLAGS) -c beg_insert.c

last_insert.o: last_insert.c
	echo "Compiling last_insert"
	gcc $(CFLAGS) -c last_insert.c

random_insert.o: random_insert.c
	echo "Compiling random_insert"
	gcc $(CFLAGS) -c random_insert.c

begin_delete.o: begin_delete.c
	echo "Compiling begin_delete"
	gcc $(CFLAGS) -c begin_delete.c

last_delete.o: last_delete.c
	echo "Compiling last_delete"
	gcc $(CFLAGS) -c last_delete.c

random_delete.o: random_delete.c
	echo "Compiling random_delete"
	gcc $(CFLAGS) -c random_delete.c

search.o: search.c
	echo "Compiling search"
	gcc $(CFLAGS) -c search.c

display.o: dislay.c
	echo "Compiling display"
	gcc $(CFLAGS) -c display.c


clean:
	echo: "Removing all but the source files"
	rm *.o final