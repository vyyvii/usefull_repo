/*
** EPITECH PROJECT, 2026
** UtilisLib
** File description:
** The useful lib of VictorDfc
*/

#include "utilslib.h"

static void free_matrice(char **out, int row)
{
    for (int i = 0; i < row; i++)
        free(out[i]);
    free(out);
}

/**
 * @ingroup matrix
 * @brief Converts a multi-line string into a matrix (char**).
 * @param str String containing '\n' as separators.
 * @param nb_lines Expected number of lines (output size, including final NULL).
 * @param delim The delimiter.
 * @return Array of allocated lines with terminal NULL,
 * or NULL if allocation fails.
 * @note Complexity: O(|str|)
 * @note Ownership: The caller must `free` each line and the array.
 * @note Part of UtilsLib by Victor Defauchy.
 */
char **str_to_matrice(char *str, int nb_lines, char delim)
{
    char **out = malloc(sizeof(char *) * (nb_lines + 1));
    int row = 0;
    int start = 0;
    size_t len = my_strlen(str);

    if (!out)
        return NULL;
    for (size_t i = 0; i < len; i++) {
        if (str[i] == delim) {
            out[row] = strslice(str, start, i);
            row++;
            start = (int)(i + 1);
        }
        if (row > 0 && !out[row - 1]) {
            free_matrice(out, row - 1);
            return NULL;
        }
    }
    out[row] = NULL;
    return out;
}
