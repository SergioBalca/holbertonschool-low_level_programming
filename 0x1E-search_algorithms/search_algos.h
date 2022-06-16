#ifndef MAIN_H
#define MAIN_H
/*libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*prototypes*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int _binary_search(int *array, size_t left, size_t right, int value);
int advanced_binary_recursive(int *array, size_t left, size_t right, int value);
int advanced_binary(int *array, size_t size, int value);

#endif /* MAIN_H */
