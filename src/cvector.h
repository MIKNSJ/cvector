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
 * Adds an item to the end of the list.
 * @param vector The vector.
 * @param value The value to be added.
 * @return nothing
*/
void push_back(int **vector, int value, size_t *size);



#endif