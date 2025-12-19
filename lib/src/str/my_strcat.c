/*
** EPITECH PROJECT, 2025
** my_strcat
** File description:
** Concatenate a string src with an other one, dest. Return dest
*/

#include "lib.h"

char *my_strcat(char *dest, char const *src)
{
    int dest_len = my_strlen(dest);
    int i = 0;

    while (src[i] != '\0') {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return dest;
}
