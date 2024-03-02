CC = gcc
CFLAGS = -Wall -Wextra -g

fi : fi.o
    $(CC) $(FLAGS) -o fi fi.o

