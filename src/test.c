/*==============================================================================
||                                                                            ||
||  2024-04-30                                                                ||
||  Purpose: Tests the implmentation of the vector library.                    ||
||                                                                            ||
==============================================================================*/



#include "cvector.h"



/**
 * Tets the print vector method.
 * @param vec_one The NULL vector.
 * @param vec_two The empty vector.
 * @param vec_three The fixed vector.
 * @return nothing
*/
void test_print_vector() {
    struct cvector null_vec = {NULL, 0};
    struct cvector empty_vec = {malloc(0 * sizeof(int)), 0};
    struct cvector fixed_vec = {malloc(5 * sizeof(int)), 5};
    fixed_vec.arr[0] = 1;
    fixed_vec.arr[1] = 2;
    fixed_vec.arr[2] = 3;
    fixed_vec.arr[3] = 4;
    fixed_vec.arr[4] = 5;

    print_vector(&null_vec.arr, null_vec.size);
    print_vector(&empty_vec.arr, empty_vec.size);
    print_vector(&fixed_vec.arr, fixed_vec.size);

    free(null_vec.arr);
    free(empty_vec.arr);
    free(fixed_vec.arr);
}



/**
 * Tets the push back method.
 * @param vec_one The NULL vector.
 * @param vec_two The empty vector.
 * @param vec_three The fixed vector.
 * @return nothing
*/
void test_push_back() {
    struct cvector null_vec = {NULL, 0};
    struct cvector empty_vec = {malloc(0 * sizeof(int)), 0};
    struct cvector fixed_vec = {malloc(5 * sizeof(int)), 5};
    fixed_vec.arr[0] = 1;
    fixed_vec.arr[1] = 2;
    fixed_vec.arr[2] = 3;
    fixed_vec.arr[3] = 4;
    fixed_vec.arr[4] = 5;

    push_back(&null_vec.arr, 1, &null_vec.size);
    push_back(&empty_vec.arr, 1, &empty_vec.size);
    push_back(&fixed_vec.arr, 6, &fixed_vec.size);

    print_vector(&null_vec.arr, null_vec.size);
    print_vector(&empty_vec.arr, empty_vec.size);
    print_vector(&fixed_vec.arr, fixed_vec.size);

    free(null_vec.arr);
    free(empty_vec.arr);
    free(fixed_vec.arr);
}



/**
 * The main function
 * @return 0 for success, 1 otherwise
*/
int main() {
    /* struct cvector null_vec = {NULL, 0};
    struct cvector empty_vec = {malloc(0 * sizeof(int)), 0};
    struct cvector fixed_vec = {malloc(5 * sizeof(int)), 5};
    fixed_vec.arr[0] = 1;
    fixed_vec.arr[1] = 2;
    fixed_vec.arr[2] = 3;
    fixed_vec.arr[3] = 4;
    fixed_vec.arr[4] = 5; */

    test_print_vector();
    printf("\n");
    test_push_back();

    return 0;
}