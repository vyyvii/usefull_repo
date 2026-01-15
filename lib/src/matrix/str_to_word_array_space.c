/*
** EPITECH PROJECT, 2026
** str_to_word_array
** File description:
** Put every word of a string into a new allocated array, where each
** cell represent a word. A word is delimited by space or tab and is composed
** by only upper or lower case.
*/

#include "utilslib.h"

static int is_sep(char c)
{
    return (c == ' ' || c == '\t');
}

static int valid_word(int i, char **array, char *str, int *cell)
{
    int start;
    int end;

    start = i;
    end = i;
    while (str[end] && is_letter(str[end]))
        end++;
    if (str[end] == '\0' || is_sep(str[end])) {
        array[*cell] = strslice(str, start, end);
        if (!array[*cell])
            free_partial_table((void **)array, *cell);
        (*cell)++;
    }
    i = end;
    return i;
}

char **str_to_word_array_space(char *str)
{
    char **array = malloc(sizeof(char *) * (my_strlen(str) + 1));
    int cell = 0;
    int i = 0;

    if (!str || !array)
        return NULL;
    while (str[i]) {
        if (is_letter(str[i]) && (i == 0 || is_sep(str[i - 1])))
            i = valid_word(i, array, str, &cell);
        else
            i++;
    }
    array[cell] = NULL;
    return array;
}
