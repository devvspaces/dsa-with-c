# Makefile

CC=gcc -Wall -Werror -Wextra -pedantic -std=gnu89
TARGET=dsa
CFILES=*/*.c */*/*.c */*/*/*.c
HFILES=*/*.h */*/*.h */*/*/*.h

build:
	$(CC) $(CFILES) -o $(TARGET) -lm -g

check:
	./$(TARGET)

valgrind:
	valgrind --leak-check=full --track-origins=yes ./$(TARGET)

clean:
	rm -f $(TARGET)

betty:
	betty $(CFILES) $(HFILES)

test:
	make betty
	make build
	make check
