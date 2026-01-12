/*
** EPITECH PROJECT, 2026
** G-CPE-110-LYN-1-1-organized-27
** File description:
** Count the number of newline-separated lines in a string.
*/

#include "utilslib.h"

void alpha_sort(char **array, int is_reverse)
{
    char *tmp;

    for (int i = 1; array[i]; i++) {
        while (i > 0 && my_strcmp(array[i], array[i - 1]) == -is_reverse) {
            tmp = array[i];
            array[i] = array[i - 1];
            array[i - 1] = tmp;
            i--;
        }
    }
}
