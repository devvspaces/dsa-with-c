# Makefile

CC=gcc -Wall -Werror -Wextra -pedantic -std=gnu89
TARGET=dsa
CFILES=*/*.c */*/*.c */*/*/*.c
HFILES=*/*.h */*/*.h */*/*/*.h

build:
	$(CC) $(CFILES) -o $(TARGET) -lm -g

check:
	./$(TARGET)

clean:
	rm -f $(TARGET)

test:
	betty $(CFILES) $(HFILES)
	$(CC) $(CFILES) -o $(TARGET) -lm -g
	make check
	make clean
