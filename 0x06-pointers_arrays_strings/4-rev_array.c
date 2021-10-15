#include "main.h"

/**
 * reverse_array- everses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements of the array
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
int *begin = a;
int *end = a;
int k, temp;

for (k = 0; k < n - 1; k++)
{
end++;
}

for (k = 0; k < n / 2; k++)
{
temp = *end;
*end = *begin;
*begin = temp;

begin++;
end--;
}

}
