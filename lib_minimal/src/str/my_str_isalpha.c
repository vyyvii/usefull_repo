/*
** EPITECH PROJECT, 2026
** my_str_isalpha
** File description:
** Return 1 when the string contains only ASCII letters, otherwise 0.
*/

#include "utilslib.h"

int my_str_isalpha(char const *str)
{
    while (*str) {
        if ((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122))
            str++;
        else
            return 0;
    }
    return 1;
}
