/*
** EPITECH PROJECT, 2025
** my_putstr
** File description:
** Write a function that displays, one-by-one, the characters of a string.
** The address of the string's first character will be found
** in the pointer passed as a parameter to the function.
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
