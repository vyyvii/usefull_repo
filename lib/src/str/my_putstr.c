/*
** EPITECH PROJECT, 2025
** my_putstr
** File description:
** Print a null-terminated string to stdout, character by character.
*/

#include "utilslib.h"

int my_putstr(char const *str)
{
    if (!str)
        return 84;
    while (*str != '\0') {
        my_putchar(*str);
        str++;
    }
    return 0;
}
