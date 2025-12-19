/*
** EPITECH PROJECT, 2025
** verif_int
** File description:
** Verifie if the argument is an integer or not
** WARNING: THIS FUNCTION MAY USE BAN FUNCTIONS ! (atoi)
*/

#include "lib.h"

int verif_int(char *number, int *result)
{
    int len_number = my_strlen(number);
    int start = 0;

    if (len_number == 0 || (number[0] == '-' && len_number == 1))
        return 84;
    if (number[0] == '-')
        start = 1;
    for (int i = start; i < len_number; i++) {
        if ((number[i] < 48 || number[i] > 57))
            return 84;
    }
    *result = my_getnbr(number);
    return 0;
}
