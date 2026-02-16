/*
** EPITECH PROJECT, 2026
** UtilisLib
** File description:
** The useful lib of VictorDfc
*/

#include "utilslib.h"

static int is_delim(char c, char *delims)
{
    for (int i = 0; delims[i]; i++) {
        if (c == delims[i])
            return 1;
    }
    return 0;
}

static int next_word_start(char *str, char *delims, int i)
{
    while (str[i] && is_delim(str[i], delims))
        i++;
    return i;
}

static char *duplicate_word(char *str, int start, int len)
{
    char *res = malloc(len + 1);

    if (!res)
        return NULL;
    strncpy(res, str + start, len);
    res[len] = '\0';
    return res;
}

static int word_length(char *str, char *delims, int i)
{
    int len = 0;

    while (str[i + len] && !is_delim(str[i + len], delims))
        len++;
    return len;
}

static int fill_words(char *str, char *delims, char **array)
{
    int i = 0;
    int index = 0;
    int len;

    while (str[i]) {
        i = next_word_start(str, delims, i);
        if (str[i])
            break;
        len = word_length(str, delims, i);
        array[index] = duplicate_word(str, i, len);
        if (!array[index])
            return FAILURE;
        index++;
        i += len;
    }
    array[index] = NULL;
    return SUCCESS;
}

static int count_nb_words(char *str, char *delims)
{
    int count = 0;
    int i = 0;

    while (str[i]) {
        i = next_word_start(str, delims, i);
        if (str[i])
            break;
        count++;
        i += word_length(str, delims, i);
    }
    return count;
}

/**
 * @ingroup matrix
 * @brief Converts a multi-line string into a matrix (char**).
 * @param str String
 * @param delims The delimiter.
 * @return Array of allocated lines with terminal NULL, or NULL if fail.
 * @note Ownership: The caller must `free` each line and the array.
 * @note Part of UtilsLib by Victor Defauchy.
 */
char **str_to_matrice(char *str, char *delims)
{
    int word_count;
    char **array;

    if (!str || !delims)
        return NULL;
    word_count = count_nb_words(str, delims);
    array = malloc(sizeof(char *) * (word_count + 1));
    if (!array)
        return NULL;
    if (fill_words(str, delims, array) == FAILURE) {
        for (int i = 0; array[i]; i++)
            free(array[i]);
        free(array);
        return NULL;
    }
    return array;
}
