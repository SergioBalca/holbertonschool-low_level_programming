#include <stdio.h>
#include "main.h"
/**
 * print_to_98- prints natural numbers from n to 98
 * @n: int type parameter
 * Return: numbers from n to 98 separeted with ,
 */
void print_to_98(int n)
{
if (n < 98)
{
int i;

for (i = n; i <= 97; i++)
printf("%d, ", i);
putchar('9');
putchar('8');
}
else if (n == 98)
{
printf("%d", n);
}
else
{
int v;

for (v = n; v >= 99; v--)
printf("%d, ", v);
putchar('9');
putchar('8');
}
putchar('\n');
}

