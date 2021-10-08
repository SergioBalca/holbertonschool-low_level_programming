#include "main.h"
/**
 * print_diagonal- draws a diagonal line on the terminal.
 * @n: number of times the diagonal is printed
 * Return: a new line if n is 0
 * Otherwise return the diagonal
 */

void print_diagonal(int n)
{
int ch = '\\';
int i;
int j;

for (i = 1; i <= n; i++)
{

if (i >= 2)
{
for (j = 1; j < i; j++)
_putchar(' ');
_putchar(ch);

if (i < n)
{
_putchar('\n');
}
}

else
{
_putchar(ch);
_putchar('\n');
}
}
_putchar('\n');
}
