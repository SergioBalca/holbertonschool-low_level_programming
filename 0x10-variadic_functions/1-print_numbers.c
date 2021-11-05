#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_numbers- print int numbers
 * @separator: is the string to be printed between numbers
 * @n: numbers of integers passesd to the function
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;

va_list intptr;
va_start(intptr, n);
for (; i < n; i++)
{
if (!i)
{
printf("%d", va_arg(intptr, int));
}
else
{
if (separator)
{
printf("%s%d", separator, va_arg(intptr, int));
}
else
{
printf("%d", va_arg(intptr, int));
}
}
}
printf("%c", '\n');
}
