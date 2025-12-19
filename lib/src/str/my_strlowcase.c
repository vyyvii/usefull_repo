/*
** EPITECH PROJECT, 2025
** my_strlowcase
** File description:
** Write a function that puts every letter
** of every word in it in lowercase.
*/

#include "lib.h"

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
        i++;
    }
    return str;
}
