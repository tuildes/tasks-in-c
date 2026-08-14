CC      = gcc
CFLAGS  = -Wall -llogger
DEST	= /tmp/leetcode.out

%: %.c
	$(CC) $(CFLAGS) $< -o $(DEST)

clean:
	rm -f $(DEST)

.PHONY: clean
