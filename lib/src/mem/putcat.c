/*
** EPITECH PROJECT, 2026
** putcat
** File description:
** Concatenate two strings, print them, then release the temporary buffer.
*/

#include "utilslib.h"

void putcat(char *txt1, char *txt2)
{
    char *cat;

    cat = my_strjoin(txt1, txt2);
    if (!cat)
        return;
    my_putstr(cat);
    free(cat);
}
