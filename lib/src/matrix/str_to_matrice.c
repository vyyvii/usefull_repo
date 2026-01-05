/*
** EPITECH PROJECT, 2025
** G-CPE-110-LYN-1-1-organized-27
** File description:
** str_to_matrice
*/

#include "utilslib.h"

static void free_matrice(char **out, int row)
{
    for (int i = 0; i < row; i++)
        free(out[i]);
    free(out);
}

char **str_to_matrice(char *str, int nb_lines)
{
    char **out = malloc(sizeof(char *) * (nb_lines + 1));
    int row = 0;
    int start = 0;
    size_t len = my_strlen(str);

    if (!out)
        return NULL;
    for (size_t i = 0; i < len; i++) {
        if (str[i] == '\n') {
            out[row] = strslice(str, start, i);
            row++;
            start = (int)(i + 1);
        }
        if (row > 0 && !out[row - 1]) {
            free_matrice(out, row - 1);
            return NULL;
        }
    }
    out[row] = NULL;
    return out;
}
