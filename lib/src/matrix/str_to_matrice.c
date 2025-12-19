/*
** EPITECH PROJECT, 2025
** G-CPE-110-LYN-1-1-organized-27
** File description:
** str_to_matrice
*/

#include "lib.h"

char **str_to_matrice(char *str, int nb_lines)
{
    char **out = smalloc(sizeof(char *) * (nb_lines + 1));
    int row = 0;
    int start = 0;

    for (size_t i = 0; i < strlen(str); i++) {
        if (str[i] == '\n') {
            out[row] = strslice(str, start, i);
            out[row][i - start] = '\0';
            row++;
            start = i + 1;
        }
    }
    return out;
}
