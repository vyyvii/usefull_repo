/*
** EPITECH PROJECT, 2026
** my_getnbr
** File description:
** Parse an int from a string with basic overflow guard.
*/

#include "utilslib.h"

static int go_in_number(long *result, const char *str, int i, int sign)
{
    while (str[i] >= '0' && str[i] <= '9') {
        *result = *result * 10 + (str[i] - '0');
        i++;
        if (sign == 1 && *result > INT_MAX)
            return 0;
        if (sign == -1 && *result > (long)INT_MAX + 1)
            return 0;
    }
    return 1;
}

int my_getnbr(const char *str)
{
    int i = 0;
    int sign = 1;
    long result = 0;

    while (str[i] == ' ' || str[i] == '\t')
        i++;
    if (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    if (str[i] < '0' || str[i] > '9')
        return 0;
    if (!go_in_number(&result, str, i, sign))
        return 0;
    return (int)(result * sign);
}
