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
#include <stdbool.h>
#include "cvector.h"



/**
 * Define a cvector structure.
*/
struct cvector {
    int *arr;
    size_t size;
    size_t capacity;
};



/**
 * Prints out the inputted vector
 * @param vector The vector.
 * @return nothing
*/
void print_vector(struct cvector* vector);



/**
 * Returns the size of the vector.
 * @param vector The vector.
 * @return The size of the vector.
*/
size_t size(struct cvector* vector);



/**
 * Returns the capacity of the vector.
 * @param vector The vector.
 * @return The capacity of the vector.
*/
size_t capacity(struct cvector* vector);



/**
 * Requests that the vector capacity be at least enough to contain n elements.
 * @param vector The vector.
 * @param new_cap The new capacity.
 * @return nothing
*/
void reserve(struct cvector* vector, size_t curr_cap);



/**
 * Checks if the vector is empty.
 * @param vector The vector.
 * @return True, if empty. Otherwise, false.
*/
bool empty(struct cvector* vector);



/**
 * Clears out the entire vector
 * @param vector The vector.
 * @return nothing
*/
void clear(struct cvector* vector);



/**
 * Adds an item to the end of the list.
 * @param vector The vector.
 * @param value The value to be added.
 * @return nothing
*/
void push_back(struct cvector* vector, int value);



/**
 * Deletes an item from the end of the list.
 * @param vector The vector.
 * @return nothing
*/
void pop_back(struct cvector* vector);



#endif