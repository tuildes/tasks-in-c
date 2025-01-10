OBJS	= program.o
SOURCE	= program.c
OUT	= riot
CC	 = gcc
FLAGS	 = -g -c -Wall -Wextra -Werror
LFLAGS	 = -lcurl

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

program.o: program.c
	$(CC) $(FLAGS) program.c 

clean:
	rm -f *.o *.gch $(OUT)
