#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_strings- prints a string passed as argument to the function
 * @separator: string to be printed between the strings
 * @n: number of strings to be printed
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
char *p;

va_list ptr;
va_start(ptr, n);
for (; i < n; i++)
{
p = va_arg(ptr, char *);
if (!p)
{
printf("(nil)");
}
else
{
if (!i)
{
printf("%s", p);
}
else
{
if (separator)
{
printf("%s%s", separator, p);
}
else
{
printf("%s", p);
}
}
}
}
printf("%c", '\n');
}
