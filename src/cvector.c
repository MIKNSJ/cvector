/*==============================================================================
||                                                                            ||
||  2024-04-30                                                                ||
||  Purpose: The main implementation of the vector library.                   ||
||                                                                            ||
==============================================================================*/



#include "cvector.h"



/**
 * Prints out the inputted vector
 * @param vector The vector.
 * @param size The size of the vector.
 * @return nothing
*/
void print_vector(int **vector, size_t size) {
    printf("[");
    for (size_t i = 0; i < size; i++) {
        printf("%d", *(*vector + i));

        if (i < size - 1) {
            printf(" ");
        }
    }
    printf("]\n");
}



/**
 * Adds an item to the end of the list.
 * @param vector The vector.
 * @param value The value to be added.
 * @return nothing
*/
void push_back(int **vector, int value, size_t *size) {
    if (*vector == NULL) {
        fprintf(stderr, "[ERROR]: The vector is not initialized.\n");
        return;
    }
    int *valid_vector = realloc(*vector, (*size + 1) * sizeof(int));

    if (valid_vector == NULL) {
        fprintf(stderr, "[ERROR]: The vector reallocation failed. \n");
        return;
    } else {
        *vector = valid_vector;
    }

    *(*vector + *size) = value;
    ++*size;
}