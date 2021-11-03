#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator- excecutes a function given as
 * a parameter on each element of an array
 * @array: is an array of int
 * @size: is the size of the array
 * @action: a pointer to a function that returns (void)
 * and has an int argument
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned long int i = 0;

if (array && size && action)
{
for (; i < size; i++)
{
action(array[i]);
}
}
}
