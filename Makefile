# Makefile

CC=gcc -Wall -Werror -Wextra -pedantic -std=gnu89
TARGET=dsa
CFILES=*/*.c */*/*.c */*/*/*.c
HFILES=*/*.h */*/*.h */*/*/*.h

test:
	betty $(CFILES) $(HFILES)
	$(CC) $(CFILES) -o $(TARGET) -lm

clean:
	rm -f $(TARGET)
