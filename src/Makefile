CC = gcc
CFLAGS = -Wall -Werror -Wextra -std=c11

all:

clean:

clang:
	find . -type f \( -name "*.c" -o -name "*.h" \) -exec clang-format -i --style=file:../../materials/linters/.clang-format {} +
