/*
** EPITECH PROJECT, 2026
** UtilisLib
** File description:
** The useful lib of VictorDfc
*/

#include "utilslib.h"

static void find_start_end(int *start, int *end, char *str, int i)
{
    *start = i;
    while (str[*start] && !is_letter(str[*start]))
        (*start)++;
    *end = *start;
    while (str[*end] && is_letter(str[*end]))
        (*end)++;
}

/**
 * @ingroup matrix
 * @brief Converts a string into a word array.
 * @param str Source string.
 * @return Array of allocated words with terminal NULL,
 * or NULL if allocation fails.
 * @note Complexity: O(|str|)
 * @note Ownership: The caller must `free` each word and the array.
 * @note Part of UtilsLib by Victor Defauchy.
 */
char **str_to_word_array(char *str)
{
    char **array = malloc(sizeof(char *) * (my_strlen(str) + 1));
    int cell = 0;
    int start = 0;
    int end = start;
    int i = 0;

    if (!str || !array)
        return NULL;
    while (str[i]) {
        find_start_end(&start, &end, str, i);
        if (start < end) {
            array[cell] = strslice(str, start, end);
            cell++;
        }
        if (cell > 0 && !array[cell - 1])
            free_partial_table((void **)array, cell);
        i = end;
    }
    array[cell] = NULL;
    return array;
}
