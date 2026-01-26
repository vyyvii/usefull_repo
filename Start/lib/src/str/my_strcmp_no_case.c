/*
** EPITECH PROJECT, 2026
** my_strcmp
** File description:
** Lexicographically compare two strings, but no matter case.
*/

#include "utilslib.h"


static char to_lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 32;
    return c;
}

int my_strcmp_no_case(char *a, char *b)
{
    int i = 0;
    char ca;
    char cb;

    while (a[i] && b[i]) {
        ca = to_lower(a[i]);
        cb = to_lower(b[i]);
        if (ca < cb)
            return -1;
        if (ca > cb)
            return 1;
        i++;
    }
    if (a[i] == b[i])
        return 0;
    return (a[i] < b[i]) ? -1 : 1;
}
