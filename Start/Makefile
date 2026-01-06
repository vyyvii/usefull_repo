##
## EPITECH PROJECT, 2026
## Makefile [project]
## File description:
## Makefile [project]
##

.PHONY: all clean fclean re unit_tests tests_run

# ─────────────────────────────────────────────────────────────
# NAME
# ─────────────────────────────────────────────────────────────
NAME 		= [project]

# ─────────────────────────────────────────────────────────────
# SOURCES & OBJECTS
# ─────────────────────────────────────────────────────────────
SRC 		= src/project.c
SRC_MAIN	= src/main.c
SRC_TEST 	= tests/test_utils.c

OBJ 		= $(SRC:.c=.o)
OBJ_MAIN 	= $(SRC_MAIN:.c=.o)
OBJ_TEST 	= $(SRC_TEST:.c=.o)

# ────────────────────────────────────────────────────────────
# COMPILER
# ─────────────────────────────────────────────────────────────
CC			= epiclang

# ─────────────────────────────────────────────────────────────
# COMPILATION FLAGS & LIBS
# ─────────────────────────────────────────────────────────────
CFLAGS      = -Wall -Wextra -g3 -Iinclude
LDFLAGS     = -L./ -lUtilsLib -lm

# ─────────────────────────────────────────────────────────────
# TEST FLAGS & LIBS
# ─────────────────────────────────────────────────────────────
TEST_FLAGS  = --coverage
TEST_LIBS   = -lcriterion

# ─────────────────────────────────────────────────────────────
# TOOLS
# ─────────────────────────────────────────────────────────────
REMOVE 		= rm -f -r
GCOV_FILES 	= "*.gcno" "*.gcda" "*.html" "*.css"

# ─────────────────────────────────────────────────────────────
# RULES
# ─────────────────────────────────────────────────────────────
all: $(NAME)

$(NAME): $(OBJ) $(OBJ_MAIN)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# ─────────────────────────────────────────────────────────────
# CLEANING RULES
# ─────────────────────────────────────────────────────────────
clean:
	$(REMOVE) $(OBJ) $(OBJ_MAIN) $(OBJ_TEST)

fclean: clean
	$(REMOVE) $(NAME) unit_tests functional_tests a.out
	for f in $(GCOV_FILES); do find . -name "$$f" -delete; done

re: fclean all

# ─────────────────────────────────────────────────────────────
# TESTING RULES
# ─────────────────────────────────────────────────────────────
unit_tests: CC = gcc
unit_tests: CFLAGS += $(TEST_FLAGS)
unit_tests: LDFLAGS += $(TEST_LIBS)
unit_tests: $(OBJ) $(OBJ_TEST)
	$(CC) -o unit_tests $^ $(LDFLAGS) $(TEST_FLAGS)

functional_tests: CC = gcc
functional_tests: CFLAGS += $(TEST_FLAGS)
functional_tests: LDFLAGS += $(TEST_LIBS)
functional_tests: $(OBJ) $(OBJ_MAIN)
	$(CC) -o functional_tests $^ $(LDFLAGS) $(TEST_FLAGS)

tests_run: CC = gcc
tests_run: fclean unit_tests functional_tests
	./unit_tests
	./tests/tests.sh
	gcovr -b --exclude-directories tests --html-details -o coverage_report.html
	@echo "Coverage report generated: coverage_report.html"
