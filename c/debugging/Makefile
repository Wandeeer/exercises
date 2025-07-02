# Variables
CC = gcc
CFLAGS = -Wall -Wextra -g -Iinclude
SRC = src/main.c src/calc.c
OBJ = $(SRC:.c=.o)
BIN = build/calculadora

# Target principal
all: $(BIN)

# Linking
$(BIN): $(OBJ)
	@mkdir -p build
	$(CC) $(OBJ) -o $@

# Compilación de .c -> .o
src/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpiar
clean:
	rm -rf src/*.o build

.PHONY: all clean