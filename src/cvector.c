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
void print_vector(struct cvector* vector) {
    if (vector->arr == NULL) {
        fprintf(stderr,
            "[print_vector() ERROR]: The vector is not initialized.\n");
        return;
    }

    printf("[");
    for (size_t i = 0; i < (size_t)vector->size; i++) {
        printf("%d", *(vector->arr + i));

        if (i < vector->size - 1) {
            printf(" ");
        }
    }
    printf("]\n");
}



/**
 * Returns the size of the vector.
 * NOTE: "return (*vector).size" is the same thing
 * @param vector The vector.
 * @return The size of the vector.
*/
size_t size(struct cvector* vector) {
    return vector->size;
}



/**
 * Checks if the vector is empty.
 * NOTE: Instead of bool, int can be used.
 * @param vector The vector.
 * @return True, if empty. Otherwise, false.
*/
bool empty(struct cvector* vector) {
    if (vector->size == 0) {
        return true;
    }
    
    return false;
}



/**
 * Clears out the entire vector
 * @param vector The vector.
 * @return nothing
*/
void clear(struct cvector* vector) {
    if (vector->arr == NULL) {
        fprintf(stderr, "[clear() ERROR]: The vector is not initialized.\n");
        return;
    } else if (vector->size == 0) {
        return;
    } else {
        free(vector->arr);
        vector->arr = malloc(0 * sizeof(int));
        vector->size = 0;
    }
}



/**
 * Adds an item to the end of the list.
 * @param vector The vector.
 * @param value The value to be added.
 * @return nothing
*/
void push_back(struct cvector* vector, int value) {
    if (vector->arr == NULL) {
        fprintf(stderr,
            "[push_back() ERROR]: The vector is not initialized.\n");
        return;
    }
    int *valid_vector = realloc(vector->arr, (vector->size + 1) * sizeof(int));

    if (valid_vector == NULL) {
        fprintf(stderr,
            "[realloc ERROR]: The vector reallocation failed. \n");
        return;
    } else {
        vector->arr = valid_vector;
    }

    *(vector->arr + vector->size) = value;
    ++vector->size;
}