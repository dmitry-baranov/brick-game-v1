CC = gcc
CFLAGS = -Wall -Werror -Wextra -std=c11
LDFLAGS = -lncurses
BUILD_DIR = build
OBJ_DIR = $(BUILD_DIR)/obj
BIN_DIR = $(BUILD_DIR)/bin
SRC_DIR = .
SRCS = $(shell find $(SRC_DIR) -name '*.c')
OBJS = $(patsubst %.c,$(OBJ_DIR)/%.o,$(SRCS))

all: clang-format clean tetris

tetris: $(BIN_DIR)/tetris

$(BIN_DIR)/tetris: $(OBJS)
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf build

clang-format:
	find . -type f \( -name "*.c" -o -name "*.h" \) -exec clang-format -i --style=file:../materials/linters/.clang-format {} +

clang-check:
	find . -type f \( -name "*.c" -o -name "*.h" \) -exec clang-format -n --style=file:../materials/linters/.clang-format {} +
