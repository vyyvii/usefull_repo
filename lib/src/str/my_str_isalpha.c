/*
** EPITECH PROJECT, 2025
** my_str_isalpha
** File description:
** Write a function that returns 1 if the string passed
** as parameter only contains alphabetical characters and
** 0 if the string contains another type of character.
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
