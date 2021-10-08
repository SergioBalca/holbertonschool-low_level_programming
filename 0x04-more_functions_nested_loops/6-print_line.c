#include "main.h"
/**
 * print_line- draws a straight line in the terminal
 *@n: number of times the char _ is printed
 * Return: a new line if n is less or equal to 0
 * otherwise, return the n times _
 */

void print_line(int n)
{
int i;
int ch = '_';

for (i = 1; i <= n; i++)
{
_putchar(ch);
}
_putchar('\n');
}
