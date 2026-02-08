/*
** EPITECH PROJECT, 2026
** UtilisLib
** File description:
** The useful lib of VictorDfc
*/

#include "utilslib.h"

/**
 * @ingroup mem
 * @brief Duplicates a string into newly allocated memory.
 * @param str Source.
 * @return Allocated copy, or NULL if allocation fails.
 * @note Complexity: O(n)
 * @note Ownership: The caller must `free` the result.
 * @note Part of UtilsLib by Victor Defauchy.
 */
char *my_strdup(char const *str)
{
    int len = my_strlen(str);
    char *out = malloc(sizeof(char) * (len + 1));

    if (!out)
        return NULL;
    for (int i = 0; i <= len; i++)
        out[i] = str[i];
    return out;
}
