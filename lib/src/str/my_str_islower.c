/*
** EPITECH PROJECT, 2025
** my_str_islower
** File description:
** Write a function that returns 1 if the string passed
** as parameter only contains lowercase characters and
** 0 if the string contains another type of character.
*/

#include "lib.h"

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
