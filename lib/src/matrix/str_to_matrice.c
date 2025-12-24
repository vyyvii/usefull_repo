/*
** EPITECH PROJECT, 2025
** G-CPE-110-LYN-1-1-organized-27
** File description:
** str_to_matrice
*/

#include "lib.h"

char **str_to_matrice(char *str, int nb_lines)
{
    char **out = malloc(sizeof(char *) * (nb_lines + 1));
    int row = 0;
    int start = 0;

    if (!out)
        return NULL;
    for (size_t i = 0; i < (size_t)my_strlen(str); i++) {
        if (str[i] == '\n') {
            out[row] = strslice(str, start, i);
            row++;
            start = i + 1;
        }
    }
    out[row] = NULL;
    return out;
}
