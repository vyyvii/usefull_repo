/*
** EPITECH PROJECT, 2026
** my_strcapitalize
** File description:
** Capitalize the first letter of each word in the string.
*/

#include "utilslib.h"

static int ltr(char c)
{
    if ((c < 65 || c > 90) && (c < 97 || c > 122) && (c < 48 || c > 57))
        return 1;
    return 0;
}

char *my_strcapitalize(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
        if (str[i] >= 97 && str[i] <= 122 && (i == 0 || ltr(str[i - 1]) == 1))
            str[i] = str[i] - 32;
        i++;
    }
    return str;
}
