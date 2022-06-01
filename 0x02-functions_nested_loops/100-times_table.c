#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
 * print_times_table- Prints the n times table,
 * starting with 0. If n is greater than 15 or less
 * than 0, the function should not print anything
 * @n: int value
 * Return: Nothing
 */
void print_times_table(int n)
{
	int i = 0, j = 0, mul = 0;

	if (n >= 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mul = i * j;
				if (j == 0)
					_putchar(mul + '0');

				else if (mul < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(mul + '0');
				}
				else if (mul < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((mul / 10) + '0');
					_putchar((mul % 10) + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((mul / 100) + '0');
					_putchar(((mul / 10) % 10) + '0');
					_putchar((mul % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
