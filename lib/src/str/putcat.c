/*
** EPITECH PROJECT, 2025
** putcat
** File description:
** Write on the stdout or stderr the text1 & text2 with a free
*/

#include "lib.h"

void putcat(char *txt1, char *txt2)
{
    char *cat;

    cat = strcat(txt1, txt2);
    printf("%s", cat);
    free(cat);
}
