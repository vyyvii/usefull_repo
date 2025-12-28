/*
** EPITECH PROJECT, 2025
** my_str_islower
** File description:
** Return 1 when the string contains only lowercase letters, otherwise 0.
*/

#include "utilslib.h"

int my_str_islower(char const *str)
{
    while (*str) {
        if (*str >= 97 && *str <= 122)
            str++;
        else
            return 0;
    }
    return 1;
}
