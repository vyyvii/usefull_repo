/*
** EPITECH PROJECT, 2026
** UtilisLib
** File description:
** The useful lib of VictorDfc
*/

#include "utilslib.h"

static int ltr(char c)
{
    if ((c < 65 || c > 90) && (c < 97 || c > 122) && (c < 48 || c > 57))
        return 1;
    return 0;
}

/**
 * @ingroup str
 * @brief Capitalizes the first letter of each word, makes others lowercase.
 * @param str Modifiable string.
 * @return Pointer to str.
 * @note Complexity: O(n)
 * @note Words are delimited by non-alphanumeric characters.
 * @note Part of UtilsLib by Victor Defauchy.
 */
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
