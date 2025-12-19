/*
** EPITECH PROJECT, 2025
** G-CPE-110-LYN-1-1-organized-27
** File description:
** count_lines
*/

#include "lib.h"

int count_lines(char *str)
{
    int lines = 1;

    for (size_t i = 0; i < (size_t)my_strlen(str); i++) {
        if (str[i] == '\n')
            lines++;
    }
    return lines;
}
