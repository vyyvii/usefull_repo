/*
** EPITECH PROJECT, 2026
** str_to_word_array
** File description:
** Put every word of a string into a new allocated array, where each
** cell represent a word. A word is composed by only upper or lower case.
*/

#include "utilslib.h"

void save_word(int start, int end, char *str, char **array, int *cell)
{
    if (start < end) {
        array[*cell] = strslice(str, start, end);
        if (!array[*cell])
            free_partial_table((void **)array, *cell);
        (*cell)++;
    }
}

char **str_to_word_array(char *str)
{
    char **array = malloc(sizeof(char *) * (my_strlen(str) + 1));
    int cell = 0;
    int start = 0;
    int end = start;
    int i = 0;

    if (!str || !array)
        return NULL;
    while (str[i]) {
        start = i;
        while (str[start] && !is_letter(str[start]))
            start++;
        end = start;
        while (str[end] && is_letter(str[end]))
            end++;
        save_word(start, end, str, array, &cell);
        i = end;
    }
    array[cell] = NULL;
    return array;
}
