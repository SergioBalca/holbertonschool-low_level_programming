#ifndef MAIN_H
#define MAIN_H
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int recursive_binary_search(int *arr, size_t s, int v, int low, int high);
void print_array(int *array, int low, int high);

#endif /* MAIN_H */
