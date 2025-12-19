##
## EPITECH PROJECT, 2025
## Makefile [project]
## File description:
## Makefile [project]
##

.PHONY: all clean fclean re unit_tests tests_run

SRC =
OBJ = $(SRC:.c=.o)

SRC_MAIN = src/main.c
OBJ_MAIN = $(SRC_MAIN:.c=.o)

SRC_TEST = tests/test_utils.c
OBJ_TEST = $(SRC_TEST:.c=.o)

CC = epiclang
CFLAGS = -Wall -Wextra -g3 -Iinclude
LDFLAGS = -L./ -lmy
TEST_FLAGS = --coverage
TEST_LIBS  = -lcriterion

NAME = [project]
REMOVE = rm -f -r

all: $(NAME)

$(NAME): $(OBJ) $(OBJ_MAIN)
	$(CC) -o $(NAME) $(OBJ) $(OBJ_MAIN) $(LDFLAGS) -g3

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(REMOVE) $(OBJ) $(OBJ_MAIN) $(OBJ_TEST)

fclean: clean
	$(REMOVE) $(NAME) unit_tests unit_tests_sh a.out
	$(REMOVE) **.gcno **.gcda **.html **.css

re: fclean all

unit_tests: CFLAGS += $(TEST_FLAGS)
unit_tests: LDFLAGS += $(TEST_LIBS)
unit_tests: $(OBJ) $(OBJ_TEST)
	$(CC) -o unit_tests $(OBJ) $(OBJ_TEST) $(LDFLAGS) $(TEST_FLAGS)

tests_run: unit_tests
	./unit_tests
