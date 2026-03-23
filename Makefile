CC = gcc
CFLAGS = -Wall

SRC = main.c add.c sub.c multi.c divi.c
OBJ = $(SRC:.c=.o)

TARGET = calculator

all: $(TARGET)

$(TARGET): $(OBJ)
    $(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

main.o: main.c
add.o: add.c
sub.o: sub.c
multi.o: multi.c
divi.o: divi.c

clean:
	rm -f $(OBJ) $(TARGET)
