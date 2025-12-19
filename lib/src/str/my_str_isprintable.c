/*
** EPITECH PROJECT, 2025
** my_str_isprintable
** File description:
** Write a function that returns 1 if the string passed
** as parameter only contains printable characters and
** 0 if the string contains another type of character.
*/

#include "lib.h"

int my_str_isprintable(char const *str)
{
    while (*str) {
        if (*str >= 32 && *str <= 126)
            str++;
        else
            return 0;
    }
    return 1;
}
