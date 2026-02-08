/*
** EPITECH PROJECT, 2026
** my_str_is_only_space
** File description:
** Return 1 when the string contains only space or tabs or new_lines,
** otherwise 0.
*/

#include "utilslib.h"

int my_str_is_only_space(char *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
            return 0;
    }
    return 1;
}
