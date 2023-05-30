# Makefile

CC=gcc -Wall -Werror -Wextra -pedantic -std=gnu89
TARGET=dsa
CFILES=*/*.c */*/*.c */*/*/*.c
HFILES=*/*.h */*/*.h */*/*/*.h

build:
	$(CC) $(CFILES) -o $(TARGET) -lm -g

check:
	./$(TARGET)

test:
	betty $(CFILES) $(HFILES)
	$(CC) $(CFILES) -o $(TARGET) -lm -g

clean:
	rm -f $(TARGET)
