OBJS	= program.o
SOURCE	= program.c
# HEADER	= library.h
OUT	= program
CC	 = gcc
FLAGS	 = -g -c -Wall -Wextra -Werror
LFLAGS	 = -lm

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

program.o: program.c
	$(CC) $(FLAGS) program.c 

clean:
	rm -f *.o *.gch $(OUT)
