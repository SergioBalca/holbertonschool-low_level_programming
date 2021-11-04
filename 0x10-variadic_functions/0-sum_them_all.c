#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_them_all- returns the sum of all its parameters
 * @n: number of arguments add
 * Return: the sum of the arguments
 */

int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i = 0;

if (n)
{
va_list intptr;
va_start(intptr, n);
for (; i < n; i++)
{
sum += va_arg(intptr, int);
}
va_end(intptr);
return (sum);
}
else
return (0);
}
