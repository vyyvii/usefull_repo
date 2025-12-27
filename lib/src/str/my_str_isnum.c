/*
** EPITECH PROJECT, 2025
** my_str_isnum
** File description:
** Write a function that returns 1 if the string passed
** as parameter only contains digits characters and
** 0 if the string contains another type of character.
*/

#include "utilslib.h"

int my_str_isnum(char const *str)
{
    while (*str) {
        if (*str >= 48 && *str <= 57)
            str++;
        else
            return 0;
    }
    return 1;
}
