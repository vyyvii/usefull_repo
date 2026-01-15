/*
** EPITECH PROJECT, 2026
** str_to_word_array
** File description:
** Put every unique word of a string into a new allocated array, where each
** cell represent a word. A word is delimited by space or tab and is composed
** by only upper or lower case.
*/

#include "utilslib.h"

int not_in_array(char **new_array, char *str)
{
    for (int i = 0; new_array[i]; i++) {
        if (my_strcmp(new_array[i], str) == 0)
            return 0;
    }
    return 1;
}

char **uniq_words(char *str)
{
    char **array = str_to_word_array(str);
    char **new_array = malloc(sizeof(char *) * 10);
    int ni = 0;

    for (int i = 0; array[i]; i++) {
        if (not_in_array(new_array, array[i])) {
            new_array[ni] = my_strdup(array[i]);
            ni++;
        }
    }
    free_table((void **)array);
    return new_array;
}
