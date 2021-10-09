#include "main.h"
/**
 * print_triangle- prints a triangle, made of #
 * @size: is the size of the triangle
 * Return: a triangle of size size
 * otherwise, return a new line
 */

void print_triangle(int size)
{
int ch = '#';
int i, j, k, h;

for (i = 1; i <= size; i++)
{

if (i != size)
{

for (j = size - 1; j >= i; j--)
{
_putchar(' ');
}

for (k = 1; k <= i; k++)
{
_putchar(ch);

}
_putchar('\n');
}

else
{
for (h = 1; h <= size; h++)
_putchar(ch);
}
}
_putchar('\n');
}
