# Makefile

CC=gcc -Wall -Werror -Wextra -pedantic -std=gnu89
TARGET=dsa
CFILES=*/*.c */*/*.c
HFILES=*/*.h */*/*.h

test:
	betty $(CFILES) $(HFILES)
	$(CC) $(CFILES) -o $(TARGET)

clean:
	rm -f $(TARGET)
