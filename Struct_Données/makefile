



main_list.o : main_list.c list.h date.h
	gcc -g -c main_list.c

list.o : list.c list.h
	gcc -g -c list.c

main : main_list.o list.o
	gcc -g -o main_list main_list.o

clean : rm -f *.o ./main_list

