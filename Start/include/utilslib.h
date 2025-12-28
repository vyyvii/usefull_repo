/*
** EPITECH PROJECT, 2025
** HEADER UtilsLib
** File description:
** Header file for UtilsLib
*/

/**
 * @file lib.h
 * @brief This file is the header file of UtilsLib.
 *
 * @details
 * This library provides utilities for:
 * - integer manipulation (arithmetic, primality, sorting),
 * - conversion between strings and numbers,
 * - string operations (tests, copies, joins, search),
 * - management of string arrays (matrices),
 * - low-level memory primitives (copy, swap, file reading).
 *
 * Functions that allocate memory return a pointer that must be freed
 * by the caller via `free`. Some functions use system calls and standard
 * library functions that may be forbidden depending on the rules
 * (e.g., open/read/close, getline/strcspn). See @warning in each description.
 *
 * @note Time complexity is indicated when relevant.
 * @author Victor Defauchy
 * @date 27.12.2025
 */

#ifndef UTILSLIB
    #define UTILSLIB
    #include <stddef.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <fcntl.h>
    #include <string.h>
    #include <limits.h>
    #include <sys/types.h>
    #include <sys/stat.h>

/**
 * @defgroup int Integers
 * @brief Utility functions related to integers.
 */
/**
 * @defgroup int_str Strings ↔ Numbers
 * @brief Conversions and printing of numbers in text form and vice versa.
 */
/**
 * @defgroup str Strings
 * @brief Operations on C strings (null-terminated).
 */
/**
 * @defgroup matrix String matrices
 * @brief Tools for arrays of strings (char**).
 */
/**
 * @defgroup mem Memory and I/O
 * @brief Low-level memory tools and file reading.
 */

// int

/**
 * @ingroup int
 * @brief Recursive integer power: computes nb ^ p.
 * @param nb Integer base.
 * @param p Exponent (0 returns 1, negative returns 0).
 * @return Result of nb ^ p if valid, otherwise 0 when p < 0
 * or on overflow risk.
 * @note Complexity: O(p)
 * @note Part of UtilsLib by Victor Defauchy.
 * @warning Overflow risk for large nb and p.
 */
int my_power(int nb, int p);

/**
 * @ingroup int
 * @brief Recursive power in double: computes nb ^ p.
 * @param nb Double base.
 * @param p Exponent (0 returns 1, negative returns 0).
 * @return Result of nb ^ p if valid, otherwise 0 for invalid cases.
 * @note Complexity: O(p)
 * @note Part of UtilsLib by Victor Defauchy.
 * @warning Undefined behavior for large values due to internal limits.
 */
double my_power_double(double nb, int p);

/**
 * @ingroup int
 * @brief Finds the smallest prime number greater than or equal to nb.
 * @param nb Start integer.
 * @return The first prime number >= nb.
 * @note Complexity: Per test near O(log log n); incremental search overall.
 * @note Part of UtilsLib by Victor Defauchy.
 */
int my_find_prime_sup(int nb);

/**
 * @ingroup int
 * @brief Tests if an integer is prime.
 * @param nb Integer to test.
 * @return 1 if prime, 0 otherwise.
 * @note Complexity: Approximately O(sqrt(n)).
 * @note Part of UtilsLib by Victor Defauchy.
 */
int my_is_prime(int nb);

/**
 * @ingroup int
 * @brief Returns 1 if n is negative, 0 otherwise.
 * @param n Integer.
 * @return 1 if n is negative, 0 otherwise.
 * @note Complexity: O(1)
 * @note Part of UtilsLib by Victor Defauchy.
 */
int my_isneg(int n);

/**
 * @ingroup int
 * @brief Sorts an integer array in ascending order (in-place).
 * @param array Pointer to the first element.
 * @param size Array size.
 * @return Nothing.
 * @note Complexity: Worst-case close to O(n ^ 2)
 * @note Part of UtilsLib by Victor Defauchy.
 * @pre array != NULL and size >= 0.
 */
void my_sort_int_array(int *array, int size);

/**
 * @ingroup int
 * @brief Validates that a string represents an integer (optionally signed)
 * and converts it.
 * @param number String to validate (may start with '-').
 * @param result Output: converted integer if valid.
 * @return 0 on success, 84 if the string is not a valid integer.
 * @note Complexity: O(n)
 * @note Part of UtilsLib by Victor Defauchy.
 * @warning Does not handle internal spaces; only ASCII digits are accepted.
 */
int verif_int(char *number, int *result);

/**
 * @ingroup int
 * @brief Perfect integer square root.
 * @param nb Input integer.
 * @return r such that r ^ 2 == nb if perfect square, otherwise 0.
 * @note Complexity: O(sqrt(n))
 */
int square_root(int nb);

// int_str

/**
 * @ingroup int_str
 * @brief Converts a string to an integer (with sign, ignores leading spaces).
 * @param str Source string.
 * @return Converted integer, 0 on overflow or invalid input.
 * @note Complexity: O(n)
 * @note Part of UtilsLib by Victor Defauchy.
 * @warning Returns 0 both for value 0 and for overflow;
 * distinguish via external validation.
 */
int my_getnbr(char const *str);

/**
 * @ingroup int_str
 * @brief Converts a string to a double (integer and fractional parts).
 * @param str Source string (optional '+'/'-' and one decimal point).
 * @return Converted double value.
 * @note Complexity: O(n)
 * @note Ignores any character after the valid numeric part.
 * @note Part of UtilsLib by Victor Defauchy.
 */
double my_get_double_nbr(char const *str);

/**
 * @ingroup int_str
 * @brief Converts a string to a long long.
 * @param str Source string (optional '+'/'-' and one decimal point).
 * @return Converted long long value.
 * @note Complexity: O(n)
 * @note Ignores any character after the valid numeric part.
 * @note Part of UtilsLib by Victor Defauchy.
 */
long long my_get_longlong_nbr(char const *str);

/**
 * @ingroup int_str
 * @brief Prints an integer to stdout without newline.
 * @param nb Integer to print.
 * @return 0.
 * @note Complexity: O(log10 n)
 * @note Uses recursion to print digits.
 * @note Part of UtilsLib by Victor Defauchy.
 */
int my_putnbr(int nb);

/**
 * @ingroup int_str
 * @brief Tests if a character is an ASCII digit.
 * @param c Character.
 * @return 1 if '0'..'9', otherwise 0.
 * @note Complexity: O(1)
 * @note Part of UtilsLib by Victor Defauchy.
 */
int my_isdigit(char c);

// str

/**
 * @ingroup str
 * @brief Writes a character to stdout.
 * @param c Character to write.
 * @return Nothing.
 * @note Complexity: O(1)
 * @note Uses write(2).
 * @note Part of UtilsLib by Victor Defauchy.
 */
void my_putchar(char c);

/**
 * @ingroup str
 * @brief Prints a string to stdout.
 * @param str Null-terminated string.
 * @return 0 on success, 84 if str == NULL.
 * @note Complexity: O(n)
 * @note Part of UtilsLib by Victor Defauchy.
 */
int my_putstr(char const *str);

/**
 * @ingroup str
 * @brief Reverses a string in-place.
 * @param str Modifiable string.
 * @return Pointer to str.
 * @note Complexity: O(n)
 * @note Part of UtilsLib by Victor Defauchy.
 */
char *my_revstr(char *str);

/**
 * @ingroup str
 * @brief Tests if the string contains only letters A-Z/a-z.
 * @param str String.
 * @return 1 if alphabetic only, otherwise 0.
 * @note Complexity: O(n)
 * @note Part of UtilsLib by Victor Defauchy.
 */
int my_str_isalpha(char const *str);

/**
 * @ingroup str
 * @brief Tests if the string contains only lowercase letters.
 * @param str String.
 * @return 1 if lowercase only, otherwise 0.
 * @note Complexity: O(n)
 * @note Part of UtilsLib by Victor Defauchy.
 */
int my_str_islower(char const *str);

/**
 * @ingroup str
 * @brief Tests if the string contains only digits.
 * @param str String.
 * @return 1 if numeric only, otherwise 0.
 * @note Complexity: O(n)
 * @note Part of UtilsLib by Victor Defauchy.
 */
int my_str_isnum(char const *str);

/**
 * @ingroup str
 * @brief Tests if the string contains only printable characters (32..126).
 * @param str String.
 * @return 1 if printable only, otherwise 0.
 * @note Complexity: O(n)
 * @note Part of UtilsLib by Victor Defauchy.
 */
int my_str_isprintable(char const *str);

/**
 * @ingroup str
 * @brief Tests if the string contains only uppercase letters.
 * @param str String.
 * @return 1 if uppercase only, otherwise 0.
 * @note Complexity: O(n)
 * @note Part of UtilsLib by Victor Defauchy.
 */
int my_str_isupper(char const *str);

/**
 * @ingroup str
 * @brief Capitalizes the first letter of each word, makes others lowercase.
 * @param str Modifiable string.
 * @return Pointer to str.
 * @note Complexity: O(n)
 * @note Words are delimited by non-alphanumeric characters.
 * @note Part of UtilsLib by Victor Defauchy.
 */
char *my_strcapitalize(char *str);

/**
 * @ingroup str
 * @brief Concatenates two strings into a newly allocated string.
 * @param s1 First string.
 * @param s2 Second string.
 * @return New string s1+s2, or NULL if allocation fails.
 * @note Complexity: O(|s1| + |s2|)
 * @note Ownership: The caller must `free` the result.
 * @note Part of UtilsLib by Victor Defauchy.
 */
char *my_strjoin(char const *s1, char const *s2);

/**
 * @ingroup str
 * @brief Concatenates three strings into a newly allocated string.
 * @param s1 First.
 * @param s2 Second.
 * @param s3 Third.
 * @return New string s1+s2+s3, or NULL if allocation fails.
 * @note Complexity: O(|s1| + |s2| + |s3|)
 * @note Ownership: The caller must `free` the result.
 * @note Part of UtilsLib by Victor Defauchy.
 */
char *my_strjoin_three(char const *s1, char const *s2, char const *s3);

/**
 * @ingroup str
 * @brief Compares two strings (lexicographic).
 * @param s1 String 1.
 * @param s2 String 2.
 * @return 0 if equal, 1 if s1>s2, -1 otherwise.
 * @note Complexity: O(min(n, m))
 * @note Part of UtilsLib by Victor Defauchy.
 */
int my_strcmp(char const *s1, char const *s2);

/**
 * @ingroup str
 * @brief Compares the first n characters of two strings.
 * @param s1 String 1.
 * @param s2 String 2.
 * @param n Number of characters to compare.
 * @return 0 if equal on n, 1 if s1>s2, -1 otherwise.
 * @note Complexity: O(n)
 * @note Part of UtilsLib by Victor Defauchy.
 */
int my_strncmp(char const *s1, char const *s2, int n);

/**
 * @ingroup str
 * @brief Copies src into dest (including '\0').
 * @param dest Destination buffer (large enough).
 * @param src Source string.
 * @return Pointer to dest.
 * @note Complexity: O(n)
 * @note Part of UtilsLib by Victor Defauchy.
 */
char *my_strcpy(char *dest, char const *src);

/**
 * @ingroup str
 * @brief Copies at most n characters from src into dest and appends '\0'.
 * @param dest Destination buffer.
 * @param src Source string.
 * @param size Max number of characters to copy.
 * @return Pointer to dest.
 * @note Complexity: O(n)
 * @note Part of UtilsLib by Victor Defauchy.
 */
char *my_strncpy(char *dest, char const *src, size_t size);

/**
 * @ingroup str
 * @brief Duplicates a string into newly allocated memory.
 * @param str Source.
 * @return Allocated copy, or NULL if allocation fails.
 * @note Complexity: O(n)
 * @note Ownership: The caller must `free` the result.
 * @note Part of UtilsLib by Victor Defauchy.
 */
char *my_strdup(char const *str);

/**
 * @ingroup str
 * @brief Returns the length of a string (excluding '\0').
 * @param str String.
 * @return Number of characters.
 * @note Complexity: O(n)
 * @note Part of UtilsLib by Victor Defauchy.
 * @pre str != NULL.
 */
int my_strlen(char const *str);

/**
 * @ingroup str
 * @brief Converts all letters to lowercase in-place.
 * @param str Modifiable string.
 * @return Pointer to str.
 * @note Complexity: O(n)
 * @note Part of UtilsLib by Victor Defauchy.
 */
char *my_strlowcase(char *str);

/**
 * @ingroup str
 * @brief Searches the first occurrence of to_find in str (like strstr).
 * @param str Search string.
 * @param to_find Pattern.
 * @return Pointer to the beginning of the occurrence, or NULL if not found.
 * @note Complexity: O(n*m) in the worst case.
 * @note Part of UtilsLib by Victor Defauchy.
 */
char *my_strstr(char *str, char const *to_find);

/**
 * @ingroup str
 * @brief Converts all letters to uppercase in-place.
 * @param str Modifiable string.
 * @return Pointer to str.
 * @note Complexity: O(n)
 * @note Part of UtilsLib by Victor Defauchy.
 */
char *my_strupcase(char *str);

/**
 * @ingroup str
 * @brief Concatenates and writes s1+s2 to stdout, then frees the concatenation.
 * @param txt1 First string.
 * @param txt2 Second string.
 * @return Nothing.
 * @note Complexity: O(|txt1| + |txt2|)
 * @note Ownership: Allocates temporarily; internal free after printing.
 * @note Part of UtilsLib by Victor Defauchy.
 */
void putcat(char *txt1, char *txt2);

/**
 * @ingroup str
 * @brief Extracts a substring [from, to) into a new allocation.
 * @param str Source.
 * @param from Start index (inclusive, clamped to 0).
 * @param to End index (exclusive, clamped to |str|).
 * @return New string, or NULL if from>=to or allocation fails.
 * @note Complexity: O(to - from)
 * @note Ownership: The caller must `free` the result.
 * @note Part of UtilsLib by Victor Defauchy.
 */
char *strslice(char *str, int from, int to);

/**
 * @ingroup str
 * @brief Reads one line from stdin with user input.
 * @param input Output: pointer to buffer managed by getline (reallocated).
 * @return 0 on success, 84 on error (EOF/read/allocation).
 * @note Part of UtilsLib by Victor Defauchy.
 * @warning Uses getline(3) and strcspn(3) to strip '\n'.
 */
int take_user_input(char **input);

// matrix

/**
 * @ingroup matrix
 * @brief Converts a multi-line string into a matrix (char**).
 * @param str String containing '\n' as separators.
 * @param nb_lines Expected number of lines (output size, including final NULL).
 * @return Array of allocated lines with terminal NULL,
 * or NULL if allocation fails.
 * @note Complexity: O(|str|)
 * @note Ownership: The caller must `free` each line and the array.
 * @note Part of UtilsLib by Victor Defauchy.
 */
char **str_to_matrice(char *str, int nb_lines);

/**
 * @ingroup matrix
 * @brief Counts the number of arguments in a NULL-terminated array.
 * @param args NULL-terminated array of strings.
 * @return Number of elements before NULL.
 * @note Complexity: O(n)
 * @note Part of UtilsLib by Victor Defauchy.
 */
int nb_args(char **args);

/**
 * @ingroup matrix
 * @brief Prints an array of words, one per line, ending with '\n'.
 * @param tab NULL-terminated array.
 * @return 0.
 * @note Complexity: O(total characters)
 * @note Part of UtilsLib by Victor Defauchy.
 */
int my_show_word_array(char *const *tab);

/**
 * @ingroup matrix
 * @brief Counts the number of lines based on '\n'.
 * @param str Source string.
 * @return Number of lines (= number of '\n' + 1).
 * @note Complexity: O(n)
 * @note Part of UtilsLib by Victor Defauchy.
 */
int count_lines(char *str);

// mem

/**
 * @ingroup mem
 * @brief Swaps the content of two memory blocks of given size.
 * @param a Block A pointer.
 * @param b Block B pointer.
 * @param size Size in bytes.
 * @return Nothing.
 * @note Complexity: O(size)
 * @note Part of UtilsLib by Victor Defauchy.
 * @pre a,b != NULL; valid and non-overlapping blocks.
 */
void my_swap(void *a, void *b, size_t size);

/**
 * @ingroup mem
 * @brief Reads a whole file into memory.
 * @param file File path.
 * @return Allocated buffer containing the content (terminated by '\0'),
 * or NULL on error.
 * @note Complexity: O(file size)
 * @note Ownership: The caller must `free` the buffer.
 * @note Part of UtilsLib by Victor Defauchy.
 * @warning Uses open(2), read(2), close(2).
 */
char *open_file(char *file);

/**
 * @ingroup mem
 * @brief Frees an array of pointers and each entry up to NULL.
 * @param table Array to free (NULL-terminated).
 * @return Nothing.
 * @note Complexity: O(n)
 * @note Part of UtilsLib by Victor Defauchy.
 */
void free_table(void **table);

/**
 * @ingroup mem
 * @brief Copies n bytes from src to dest (like memcpy, no overlap handling).
 * @param dest Destination.
 * @param src Source.
 * @param n Number of bytes to copy.
 * @return dest pointer.
 * @note Complexity: O(n)
 * @note Part of UtilsLib by Victor Defauchy.
 * @pre Non-overlapping regions or undefined behavior.
 */
void *my_memcpy(void *dest, const void *src, size_t n);

#endif /* UTILSLIB */
