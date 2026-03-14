/*
** EPITECH PROJECT, 2026
** UtilisLib
** File description:
** The useful lib of VictorDfc
*/

#include "utilslib.h"

static void k_level(abcsizeij_t *args)
{
    double **A = args->A;
    double **B = args->B;
    double **C = args->C;
    int i = args->i;
    int j = args->j;
    int sizeB = args->sizeB;

    C[i][j] = 0;
    for (int k = 0; k < sizeB; k++)
        C[i][j] += A[i][k] * B[k][j];
}

double **multiplies_two_matrices(double **A, double **B, int sizeA, int sizeB)
{
    double **C = malloc(sizeof(double *) * sizeA);
    abcsizeij_t args = {0};

    for (int i = 0; i < sizeA; i++) {
        C[i] = malloc(sizeof(double) * sizeB);
        for (int j = 0; j < sizeB; j++) {
            args.A = A;
            args.B = B;
            args.C = C;
            args.i = i;
            args.j = j;
            args.sizeB = sizeB;
            k_level(&args);
        }
    }
    return C;
}

double **divise_matrice(double **A, int sizeA, int divise_by)
{
    for (int i = 0; i < sizeA; i++) {
        for (int j = 0; j < sizeA; j++)
            A[i][j] /= divise_by;
    }
    return A;
}

double **construct_matrice(double *A, int sizeA)
{
    int size = (int)my_sqrt((double)sizeA);
    double **matrice = malloc(sizeof(double *) * size);
    int k = 0;

    if (!matrice)
        return NULL;
    for (int i = 0; i < size; i++) {
        matrice[i] = malloc(sizeof(double) * size);
        if (!matrice[i]) {
            free_partial_table((void **)matrice, i);
            return NULL;
        }
        for (int j = 0; j < size; j++) {
            matrice[i][j] = (A[k]) ? A[k] : 0.0;
            k++;
        }
    }
    return matrice;
}

double **identity_matrice(int len)
{
    int size = (int)my_sqrt((double)len);
    double **matrice = malloc(sizeof(double *) * size);

    if (!matrice)
        return NULL;
    for (int i = 0; i < size; i++) {
        matrice[i] = malloc(sizeof(double) * size);
        if (!matrice[i]) {
            free_partial_table((void **)matrice, i);
            return NULL;
        }
        for (int j = 0; j < size; j++)
            matrice[i][j] = (i == j) ? 1.0 : 0.0;
    }
    return matrice;
}
