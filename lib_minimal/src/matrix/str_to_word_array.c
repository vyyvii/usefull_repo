/*
** EPITECH PROJECT, 2026
** str_to_word_array
** File description:
** Put every word of a string into a new allocated array, where each
** cell represent a word. A word is delimited by space or tab and is composed
** by only upper or lower case.
*/

#include "utilslib.h"

char **str_to_word_array(char *str)
{
    char **array = malloc(sizeof(char *) * 10);
    int cell = 0;
    int start = 0;
    int end = start;
    int i = 0;

    while (str[i]) {
        start = i;
        while (str[start] && !is_letter(str[start]))
            start++;
        end = start;
        while (str[end] && is_letter(str[end]))
            end++;
        array[cell] = strslice(str, start, end);
        cell++;
        i = end + 1;
    }
    array[cell] = NULL;
    return array;
}
