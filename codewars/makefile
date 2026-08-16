CC      = gcc
CFLAGS  = -Wall -llogger
DEST	= /tmp/cw.out

%: %.c
	$(CC) $(CFLAGS) $< -o $(DEST)

clean:
	rm -f $(DEST)

.PHONY: clean
