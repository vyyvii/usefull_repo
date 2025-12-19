/*
** EPITECH PROJECT, 2025
** my_strncat
** File description:
** Concatenate n char of a string src with an other one, dest. Return dest
*/

#include "lib.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int dest_len = my_strlen(dest);
    int i = 0;

    while (i < nb && src[i] != '\0') {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return dest;
}
