/*
** EPITECH PROJECT, 2025
** my_strupcase
** File description:
** Write a function that puts every letter
** of every word in it in uppercase.
*/

#include "lib.h"

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] = str[i] - 32;
        i++;
    }
    return str;
}
