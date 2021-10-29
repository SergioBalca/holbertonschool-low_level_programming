#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range- creates an array of integers
 * @min: the first element of the array
 * @max: the last element of the array
 * Return: a pointer that contains the elements of the array
 * from min (included) to max (included)
 */

int *array_range(int min, int max)
{
int i = min;
int size = 0;
int j = min;
int *ptr;

if (min > max)
{
return (NULL);
}
while (i >= min && i <= max)
{
i++;
size++;
}
ptr = malloc(sizeof(int) * size);
if (ptr == NULL)
{
return (NULL);
}
while (j >= min && j <= max)
{
*ptr = j;
j++;
ptr++;
}
return (ptr);
}
