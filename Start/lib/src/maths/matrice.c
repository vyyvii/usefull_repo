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
 * @param A First matrix.
 * @param B Second matrix.
 * @param sizeA Number of rows of matrix A (and resulting matrix).
 * @param sizeB Number of columns of matrix B (and resulting matrix).
 * @return A newly allocated matrix containing the result of A * B,
 * or NULL on allocation failure.
 * @note Complexity: O(sizeA * sizeB * sizeB)
 * @note Part of UtilsLib by Victor Defauchy.
 */
double **multiplies_two_matrices(double **A, double **B, int sizeA, int sizeB)
{
    double **C = malloc(sizeof(double *) * sizeA);
    abcsizeij_t args = {0};

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
 * @param A First matrix.
 * @param B Second matrix.
 * @param sizeA Number of rows.
 * @param sizeB Number of columns.
 * @return A newly allocated matrix containing A + B,
 * or NULL if allocation fails
 * or if matrix sizes are incompatible.
 * @note Complexity: O(sizeA * sizeB)
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
 * @param sizeA Size of the matrix (number of rows and columns).
 * @param divise_by The scalar value used to divide each element.
 * @return A newly allocated matrix containing the result,
 * or NULL on allocation failure.
 * @note Complexity: O(sizeA * sizeA)
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
 * @brief Construct a square matrix from a linear array.
 * @param A The array containing the matrix values.
 * @param sizeA Number of elements in the array.
 * @return A newly allocated square matrix containing the values of A,
 * padded with 0.0 if necessary, or NULL on allocation failure.
 * @note The size of the matrix is determined by sqrt(sizeA).
 * @note Complexity: O(sizeA)
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
            matrice[i][j] = (k >= sizeA) ? A[k] : 0.0;
            k++;
        }
    }
    return matrice;
}

/**
 * @ingroup maths
 * @brief Create an identity matrix.
 * @param len Number of elements corresponding to the squared matrix size.
 * @return A newly allocated identity matrix, or NULL on allocation failure.
 * @note The matrix dimension is determined by sqrt(len).
 * @note Complexity: O(n²)
 * @note Part of UtilsLib by Victor Defauchy.
 */
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
