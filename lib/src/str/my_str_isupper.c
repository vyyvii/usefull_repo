/*
** EPITECH PROJECT, 2025
** my_str_isupper
** File description:
** Write a function that returns 1 if the string passed
** as parameter only contains uppercase characters and
** 0 if the string contains another type of character.
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
