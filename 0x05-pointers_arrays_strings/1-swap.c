#include "main.h"

/**
 * swap_int- swaps the values of two integers
 * @a: first interger to be swap
 * @b: second interger to be swap
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
int temp = *b;

*b = *a;
*a = temp;
}
