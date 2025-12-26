/*
** EPITECH PROJECT, 2025
** HEADER libmy
** File description:
** Header file for libmy
*/

#ifndef LIBMY
    #define LIBMY
    #include <stddef.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <fcntl.h>
    #include <string.h>
    #include <limits.h>
    #include <sys/types.h>
    #include <sys/stat.h>

// int
int my_compute_power_rec(int nb, int p);
double my_compute_power_rec_double(double nb, int p);
int my_find_prime_sup(int nb);
int my_is_prime(int nb);
int my_isneg(int n);
void my_sort_int_array(int *array, int size);
int verif_int(char *number, int *result);
int square_root(int nb);

// int_str
int my_getnbr(char const *str);
double my_get_double_nbr(const char *str);
int my_putnbr(int nb);

// str
void my_putchar(char c);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char *my_strcapitalize(char *str);
char *my_strjoin(char const *s1, char const *s2);
char *my_strjoin_three(char const *s1, char const *s2, char const *s3);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strdup(char const *str);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void putcat(char *txt1, char *txt2);
char *strslice(char *str, int from, int to);
int take_user_input(char **input);

// matrix
char **str_to_matrice(char *str, int nb_lines);
int nb_args(char **args);
int my_show_word_array(char *const *tab);
int count_lines(char *str);

// mem
void my_swap(void *a, void *b, size_t size);
char *open_file(char *file);
void free_table(void **table);
void *my_memcpy(void *dest, const void *src, size_t n);

#endif /* LIBMY */
