/*
** EPITECH PROJECT, 2025
** G-CPE-110-LYN-1-1-organized-27
** File description:
** strslice
*/

#include "utilslib.h"

char *strslice(char *str, int from, int to)
{
    char *out;
    int len_str = my_strlen(str);
    int j = 0;

    from = (from < 0) ? 0 : from;
    to = (to > len_str) ? len_str : to;
    if (from >= to)
        return NULL;
    out = malloc((to - from) + 1);
    if (!out)
        return NULL;
    for (int i = from; i < to; i++) {
        out[j] = str[i];
        j++;
    }
    out[j] = '\0';
    return out;
}
