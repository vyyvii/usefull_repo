/*
** EPITECH PROJECT, 2025
** G-CPE-110-LYN-1-1-organized-27
** File description:
** strslice
*/

#include "lib.h"

char *strslice(char *str, int from, int to)
{
    char *out = smalloc(strlen(str) + 1);
    int j = 0;

    for (int i = from; i < to; i++) {
        out[j] = str[i];
        j++;
    }
    out[j] = '\0';
    return out;
}
