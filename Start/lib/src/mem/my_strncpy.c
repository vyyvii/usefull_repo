/*
** EPITECH PROJECT, 2026
** UtilisLib
** File description:
** The useful lib of VictorDfc
*/

#include "utilslib.h"

/**
 * @ingroup mem
 * @brief Copies at most n characters from src into dest and appends '\0'.
 * @param dest Destination buffer.
 * @param src Source string.
 * @param size Max number of characters to copy.
 * @return Pointer to dest.
 * @note Complexity: O(n)
 * @note Part of UtilsLib by Victor Defauchy.
 */
char *my_strncpy(char *dest, char const *src, size_t size)
{
    size_t i = 0;

    if (size == 0)
        return dest;
    while (i + 1 < size && src[i]) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
