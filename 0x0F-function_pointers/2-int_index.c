#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index- searches for an integer
 * @array: is an array of integers
 * @size: is the size of the array
 * @cmp: a pointer to a fucntion that has an int argument
 * and returns an integer
 * Return: the index of the first element for which cmp
 * does not return 0
 * if no element matches, return -1
 * if size is less or equal to 0, returns -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
int j = 0;

if (size <= 0)
{
return (-1);
}
if (array && size && cmp)
{
for (; j < size; j++)
{
while (!cmp(array[i]))
i++;
}
}
if (i == j)
return (-1);
else
return (i);
}
