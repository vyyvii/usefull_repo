/*
** EPITECH PROJECT, 2026
** my_show_word_array
** File description:
** Print each string of a NULL-terminated array on its own line.
*/

#include "utilslib.h"
#include <stdlib.h>

int my_show_word_array(char *const *tab)
{
    int i = 0;

    while (tab && tab[i]) {
        my_putstr(tab[i]);
        my_putchar('\n');
        i++;
    }
    return SUCCESS;
}
