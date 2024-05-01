/*==============================================================================
||                                                                            ||
||  2024-04-30                                                                ||
||  Purpose: The main outline of the vector library.                          ||
||                                                                            ||
==============================================================================*/



#ifndef cvector_h
#define cvector_h

#include <stdio.h>
#include <stdlib.h>
#include "cvector.h"



/**
 * Define a cvector structure.
*/
struct cvector {
    int *arr;
    size_t size;
};



/**
 * Prints out the inputted vector
 * @param vector The vector.
 * @param size The size of the vector.
 * @return nothing
*/
void print_vector(int **vector, size_t size);



/**
 * Prints out the size of the vector.
 * NOTE: We already know the size, but we are simply making a print function.
 * @param size The size of the vector.
 * @return nothing
*/
void size(size_t size);



/**
 * Clears out the entire vector
 * @param vector The vector.
 * @return nothing
*/
void clear(int **vector);



/**
 * Adds an item to the end of the list.
 * @param vector The vector.
 * @param value The value to be added.
 * @return nothing
*/
void push_back(int **vector, int value, size_t *size);



#endif