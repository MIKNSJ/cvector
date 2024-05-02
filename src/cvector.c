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
 * Returns the capacity of the vector.
 * @param vector The vector.
 * @return The capacity of the vector.
*/
size_t capacity(struct cvector* vector) {
    return vector->capacity;
}



/**
 * Requests that the vector capacity be at least enough to contain n elements.
 * @param vector The vector.
 * @param new_cap The new capacity.
 * @return nothing
*/
void reserve(struct cvector* vector, size_t new_cap) {
    if (vector->arr == NULL) {
        fprintf(stderr, "[reserve() ERROR]: The vector is not initialized.\n");
        return;
    }

    if (vector->capacity > new_cap) {
       fprintf(stderr,
        "[reserve() ERROR]: Capacity is less then requested. \n");
        return; 
    } else if (vector->capacity == new_cap) {
        return;
    } else {
        int *re_cap = realloc(vector->arr, new_cap * sizeof(int));

        if (re_cap == NULL) {
            fprintf(stderr,
                "[realloc ERROR]: The vector reallocation failed. \n");
            return;
        }

        vector->arr = re_cap;
        vector->capacity = new_cap;
    }
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
        vector->arr = malloc(vector->size * sizeof(int));
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

    if (vector->size == vector->capacity) {
        reserve(vector, vector->capacity + 1);
    }

    *(vector->arr + vector->size) = value;
    ++vector->size;
}



/**
 * Deletes an item from the end of the list.
 * @param vector The vector.
 * @return nothing
*/
void pop_back(struct cvector* vector) {
    if (vector->arr == NULL) {
        fprintf(stderr,
            "[pop_back() ERROR]: The vector is not initialized.\n");
        return;
    } else if (vector->size == 0) {
        return;
    } else {
        int* new_vec = malloc(vector->capacity * sizeof(int));

        for (size_t i = 0; i < (size_t)vector->size - 1; i++) {
            *(new_vec + i) = *(vector->arr + i);
        }

        free(vector->arr);
        vector->arr = new_vec;
        --vector->size;
    }
}