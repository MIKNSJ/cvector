/*==============================================================================
||                                                                            ||
||  2024-04-30                                                                ||
||  Purpose: Tests the implmentation of the vector library.                    ||
||                                                                            ||
==============================================================================*/



#include "cvector.h"



/**
 * Tets the print vector method.
 * @return nothing
*/
void test_print_vector() {
    printf("========== test_print_vector() ==========\n");
    struct cvector null_vec = {NULL, 0};
    struct cvector empty_vec = {malloc(0 * sizeof(int)), 0};
    struct cvector fixed_vec = {malloc(5 * sizeof(int)), 5};
    fixed_vec.arr[0] = 1;
    fixed_vec.arr[1] = 2;
    fixed_vec.arr[2] = 3;
    fixed_vec.arr[3] = 4;
    fixed_vec.arr[4] = 5;

    print_vector(&null_vec);
    printf("Size: %lld\n", size(&null_vec));
    print_vector(&empty_vec);
    printf("Size: %lld\n", size(&empty_vec));
    print_vector(&fixed_vec);
    printf("Size: %lld\n", size(&fixed_vec));
    printf("\n\n");

    free(null_vec.arr);
    free(empty_vec.arr);
    free(fixed_vec.arr);
}



/**
 * Tets the push back method.
*/
void test_push_back() {
    printf("========== test_push_back() ==========\n");
    struct cvector null_vec = {NULL, 0};
    struct cvector empty_vec = {malloc(0 * sizeof(int)), 0};
    struct cvector fixed_vec = {malloc(5 * sizeof(int)), 5};
    fixed_vec.arr[0] = 1;
    fixed_vec.arr[1] = 2;
    fixed_vec.arr[2] = 3;
    fixed_vec.arr[3] = 4;
    fixed_vec.arr[4] = 5;

    push_back(&null_vec, 1);
    push_back(&empty_vec, 1);
    push_back(&fixed_vec, 6);

    print_vector(&null_vec);
    printf("Size: %lld\n", size(&null_vec));
    print_vector(&empty_vec);
    printf("Size: %lld\n", size(&empty_vec));
    print_vector(&fixed_vec);
    printf("Size: %lld\n", size(&fixed_vec));
    printf("\n\n");

    free(null_vec.arr);
    free(empty_vec.arr);
    free(fixed_vec.arr);
}



/**
 * Tets the clear method.
*/
void test_clear() {
    printf("========== test_clear() ==========\n");
    struct cvector null_vec = {NULL, 0};
    struct cvector empty_vec = {malloc(0 * sizeof(int)), 0};
    struct cvector fixed_vec = {malloc(5 * sizeof(int)), 5};
    fixed_vec.arr[0] = 1;
    fixed_vec.arr[1] = 2;
    fixed_vec.arr[2] = 3;
    fixed_vec.arr[3] = 4;
    fixed_vec.arr[4] = 5;

    clear(&null_vec);
    clear(&empty_vec);
    clear(&fixed_vec);

    print_vector(&null_vec);
    print_vector(&empty_vec);
    print_vector(&fixed_vec);
    printf("\n\n");

    free(null_vec.arr);
    free(empty_vec.arr);
    free(fixed_vec.arr);
}



/**
 * Tests the empty method
*/
void test_empty() {
    printf("========== test_empty() ==========\n");
    struct cvector null_vec = {NULL, 0};
    struct cvector empty_vec = {malloc(0 * sizeof(int)), 0};
    struct cvector fixed_vec = {malloc(5 * sizeof(int)), 5};
    fixed_vec.arr[0] = 1;
    fixed_vec.arr[1] = 2;
    fixed_vec.arr[2] = 3;
    fixed_vec.arr[3] = 4;
    fixed_vec.arr[4] = 5;

    printf("%d\n", empty(&null_vec));
    printf("%d\n", empty(&empty_vec));
    printf("%d\n", empty(&fixed_vec));
    printf("\n\n");
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
    test_push_back();
    test_clear();
    test_empty();

    return 0;
}