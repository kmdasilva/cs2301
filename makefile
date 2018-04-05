all: at2 at3

at2: at2.o print_arrays.o makearr.o sort.o
	gcc -g --std=gnu89 at2.o print_arrays.o makearr.o sort.o -o at2

at2.o: at2.c print_arrays.h sort.h
		gcc -g --std=gnu89 -c at2.c

at3: at3.o print_arrays.o sort.o
		gcc -g --std=gnu89 at3.o print_arrays.o sort.o  -o at3

at3.o: at3.c sort.h print_arrays.h
	gcc -g --std=gnu89 -c at3.c

print_arrays.o: print_arrays.c print_arrays.h
	gcc -g --std=gnu89 -c print_arrays.c

makearr.o: makearr.c print_arrays.h
		gcc -g --std=gnu89 -c makearr.c

sort.o: sort.c sort.h
		gcc  -g --std=gnu89 -c sort.c

clean:
	rm -f *.o
	rm -f at2 at3 print_arrays makearr sort

docs:
	doxygen
	chmod a+r ~/cs2301_hws/cs2301_hw2/html/*
	cp -p ~/cs2301_hws/cs2301_hw2/html/* ~/public_html/cs2301_hw02
