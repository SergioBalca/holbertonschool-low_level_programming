#include "main.h"
/**
 * print_square- prints a square made of #
 * @size: is the size of the square
 * Return: a square when size is greater than o
 * otherwise print a new line
 */

void print_square(int size)
{
int ch = '#';
int i, j;

i = 1;
while (i <= size)
{
for (j = 1; j <= size; j++)
{
_putchar(ch);
}

if (i < size)
{
_putchar('\n');
}

i++;
}

_putchar('\n');
}
