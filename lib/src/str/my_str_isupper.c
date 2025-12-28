/*
** EPITECH PROJECT, 2025
** my_str_isupper
** File description:
** Return 1 when the string contains only uppercase letters, otherwise 0.
*/

#include "utilslib.h"

int my_str_isupper(char const *str)
{
    while (*str) {
        if (*str >= 65 && *str <= 90)
            str++;
        else
            return 0;
    }
    return 1;
}
