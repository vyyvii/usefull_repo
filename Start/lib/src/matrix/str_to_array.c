/*
** EPITECH PROJECT, 2026
** UtilisLib
** File description:
** The useful lib of VictorDfc
*/

#include "utilslib.h"

static int is_sep(char c)
{
    return (c == ' ' || c == '\t');
}

static int valid_word(int i, char **array, char *str, int *cell)
{
    int start;
    int end;

    start = i;
    end = i;
    while (str[end] && !is_sep(str[end]))
        end++;
    if (str[end] == '\0' || is_sep(str[end])) {
        array[*cell] = strslice(str, start, end);
        if (!array[*cell])
            free_partial_table((void **)array, *cell);
        (*cell)++;
    }
    i = end;
    return i;
}

/**
 * @ingroup matrix
 * @brief Transform a string to an array, whith space or tab as delimiter.
 * @param str String
 * @return An array.
 * @warning Uses getline(3).
 * @warning Owner must call the result.
 * @note Part of UtilsLib by Victor Defauchy.
 */
char **str_to_array(char *str)
{
    char **array = malloc(sizeof(char *) * (my_strlen(str) + 1));
    int cell = 0;
    int i = 0;

    if (!str || !array || my_str_is_only_space(str))
        return NULL;
    while (str[i]) {
        if (!is_sep(str[i]) && (i == 0 || is_sep(str[i - 1])))
            i = valid_word(i, array, str, &cell);
        else
            i++;
    }
    array[cell] = NULL;
    return array;
}
