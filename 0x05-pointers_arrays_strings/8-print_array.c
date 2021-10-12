#include "main.h"
#include <stdio.h>

/**
 * print_array- prints n elements of an array of integers
 * @a: is a pointer that saves the values of the array
 * @n: is the number of characters of the array
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
int i = 0;

while (i < n)
{
if (i == n - 1)
{
printf("%d", a[i]);
}

else
{
printf("%d, ", a[i]);
}
i++;
}
printf("\n");
}
