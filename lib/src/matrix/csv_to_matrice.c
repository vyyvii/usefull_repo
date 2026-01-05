/*
** EPITECH PROJECT, 2026
** csv_file / 105demography
** File description:
** File that handle the opening & the parsing of the data csv file
*/

#include "utilslib.h"

static char **open_csv(char *file_path)
{
    char *raw_file = open_file(file_path);
    char **matrice_file;

    if (!raw_file)
        return NULL;
    matrice_file = str_to_matrice(raw_file, count_lines(raw_file));
    free(raw_file);
    if (!matrice_file)
        return NULL;
    return matrice_file;
}

static int count_cells(char *line, char delim)
{
    int i = 0;
    int nb_cells = 0;

    if (!line)
        return 0;
    while (line[i] != '\0') {
        if (line[i] == delim)
            nb_cells++;
        i++;
    }
    nb_cells++;
    return nb_cells;
}

static char **split_line(char *line, char delim)
{
    int i = 0;
    int start = 0;
    int cell = 0;
    int nb_cells = count_cells(line, delim);
    char **splitted = malloc(sizeof(char *) * (nb_cells + 1));

    if (!splitted)
        return NULL;
    while (line[i] != '\0' && line[i] != '\n') {
        while (line[i] != delim && line[i] != '\0' && line[i] != '\n')
            i++;
        splitted[cell] = strslice(line, start, i);
        if (!splitted[cell])
            return NULL;
        cell++;
        start = i + 1;
        i = (line[i]) ? i + 1 : i;
    }
    splitted[cell] = NULL;
    return splitted;
}

char ***csv_martice(char *file_path)
{
    char **file = open_csv(file_path);
    char ***csv;
    int nb_lines = 0;

    if (!file)
        return NULL;
    for (int i = 0; file[i]; i++)
        nb_lines++;
    csv = malloc(sizeof(char **) * (nb_lines + 1));
    for (int i = 0; i < nb_lines; i++) {
        csv[i] = split_line(file[i], ';');
        if (!csv[i])
            return NULL;
    }
    csv[nb_lines] = NULL;
    free_table((void **)file);
    return csv;
}

void free_csv(char ***csv)
{
    for (int i = 0; csv[i]; i++) {
        for (int j = 0; csv[i][j]; j++)
            free(csv[i][j]);
        free(csv[i]);
    }
    free(csv);
}
