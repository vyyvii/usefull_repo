##
## EPITECH PROJECT, 2025
## Makefile libmy
## File description:
## Makefile libmy
##

.PHONY: all clean fclean re

SRC = $(shell find src -name '*.c')
OBJ = $(SRC:.c=.o)

CC = epiclang
CFLAGS = -Wall -Wextra -g3 -Iinclude
LDFLAGS =

NAME = libmy.a
REMOVE = rm -f -r

all: $(NAME)

$(NAME): $(OBJ) $(OBJ_MAIN)
	@ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(REMOVE) $(OBJ) $(OBJ_MAIN) $(OBJ_TEST)

fclean: clean
	$(REMOVE) $(NAME) unit_tests unit_tests_sh a.out
	$(REMOVE) **.gcno **.gcda **.html **.css

re: fclean all
