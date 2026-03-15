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

/**
 * @ingroup maths
 * @brief Multiply two matrices.
 * @param A The first matrix.
 * @param B The second matrix.
 * @param sizeA Number of rows of matrix A.
 * @param sizeB Number of columns of matrix B.
 * @return The resulting matrix of the multiplication A * B,
 * or NULL if allocation fails.
 * @note Complexity: O(n^3)
 * @note Part of UtilsLib by Victor Defauchy.
 */
double **multiplies_two_matrices(double **A, double **B, int sizeA, int sizeB)
{
    double **C = malloc(sizeof(double *) * sizeA);
    abcsizeij_t args = { 0 };

    for (int i = 0; i < sizeA; i++) {
        C[i] = malloc(sizeof(double) * sizeB);
        if (!C[i]) {
            free_partial_table((void **)C, i);
            return NULL;
        }
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

/**
 * @ingroup maths
 * @brief Add two matrices together.
 * @param A The first matrix.
 * @param B The second matrix.
 * @param sizeA Number of rows of the matrices.
 * @param sizeB Number of columns of the matrices.
 * @return The resulting matrix of A + B, or NULL if allocation fails.
 * @note Complexity: O(n^2)
 * @note Part of UtilsLib by Victor Defauchy.
 */
double **add_two_matrices(double **A, double **B, int sizeA, int sizeB)
{
    double **C = (sizeA == sizeB) ? malloc(sizeof(double *) * sizeA) : NULL;

    if (!C)
        return NULL;
    for (int i = 0; i < sizeA; i++) {
        C[i] = malloc(sizeof(double) * sizeB);
        if (!C[i]) {
            free_partial_table((void **)C, i);
            return NULL;
        }
        for (int j = 0; j < sizeB; j++)
            C[i][j] = A[i][j] + B[i][j];
    }
    return C;
}

/**
 * @ingroup maths
 * @brief Divide every element of a matrix by a scalar value.
 * @param A The matrix to divide.
 * @param sizeA The dimension of the square matrix.
 * @param divise_by The scalar value used as divisor.
 * @return A new matrix where each element of A is divided by divise_by,
 * or NULL if allocation fails.
 * @note Complexity: O(n^2)
 * @note Part of UtilsLib by Victor Defauchy.
 */
double **divise_matrice_by_double(double **A, int sizeA, double divise_by)
{
    double **B = malloc(sizeof(double *) * sizeA);

    if (!B)
        return NULL;
    for (int i = 0; i < sizeA; i++) {
        B[i] = malloc(sizeof(double) * sizeA);
        if (!B[i]) {
            free_partial_table((void **)B, i);
            return NULL;
        }
        for (int j = 0; j < sizeA; j++)
            B[i][j] = A[i][j] / divise_by;
    }
    return B;
}

/**
 * @ingroup maths
 * @brief Construct a square matrix from a linear array of coefficients.
 * @param A The array containing the coefficients.
 * @param sizeA The number of coefficients in the array.
 * @return A newly allocated square matrix filled row by row,
 * or NULL if allocation fails.
 * @note The size of the matrix is determined using sqrt(sizeA).
 * @note Complexity: O(n^2)
 * @note Part of UtilsLib by Victor Defauchy.
 */
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
            matrice[i][j] = (k < sizeA) ? A[k] : 0.0;
            k++;
        }
    }
    return matrice;
}

/**
 * @ingroup maths
 * @brief Create an identity matrix.
 * @param size The dimension of the square matrix.
 * @return A size x size identity matrix, or NULL if allocation fails.
 * @note The identity matrix contains 1.0 on the diagonal and 0.0 elsewhere.
 * @note Complexity: O(n^2)
 * @note Part of UtilsLib by Victor Defauchy.
 */
double **identity_matrice(int size)
{
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
