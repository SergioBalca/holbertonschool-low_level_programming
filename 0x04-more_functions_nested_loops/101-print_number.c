#include <stdio.h>
#include "main.h"
#include <limits.h>
/**
 * print_number- prints a number passed as argument
 * @n: number to print
 * Return: Nothing
 */
void print_number(int n)
{

	/*single digit number*/
	if (n >= 0 && n < 10)
	{
		_putchar(n + '0');
	}
	/*single digit negative number*/
	else if (n < 0 && n > -10)
	{
		n *= -1;
		_putchar('-');
		_putchar(n + '0');
	}
	else
	{
		print(n);
	}
}

/**
 * number_size- counts the number of digits in an integer
 * @n: integer
 * Return: the number of digits of n
 */
int number_size(int n)
{
	int count = 0;

	if (n > 0)
	{
		while (n != 0)
		{
			n = n / 10;
			count++;
		}
	}
	else
	{
		n *= -1;
		while (n != 0)
		{
			n = n / 10;
			count++;
		}
	}
	return (count);
}

/**
 * print- prints an integer
 * @n: number to print
 * Return: Nothing
 */
void print(int n)
{
	int i = 0;
	int div = 1;
	int j = 0;
	int count = 0;

	count = number_size(n);
	while (i < count - 1)
	{
		div *= 10;
		i++;
	}

	if (n > 0)
	{
		while (j < count)
		{
			if (j == 0)
				_putchar((n / div) + '0');
			else
			{
				if (div == 0)
					_putchar((n % 10) + '0');
				else
				{
					_putchar(((n / div) % 10) + '0');
				}
			}
			div /= 10;
			j++;
		}
	}
	else
		print_negative(n, div);
}


/**
 * print_negative- prints a negative integer
 * @n: number to print
 * @div: integer to print each digit of n as a character value
 * Return: Nothing
 */
void print_negative(int n, int div)
{
	int j = 0;
	int count = 0;

	count = number_size(n);
	if (n == INT_MIN)
		n = INT_MAX;
	else
		n *= -1;
	while (j < count)
	{
		if (j == 0)
		{
			_putchar('-');
			_putchar((n / div) + '0');
		}
		else
		{
			if (div == 0)
				_putchar((n % 10) + '0');
			else
				_putchar(((n / div) % 10) + '0');
		}
		div /= 10;
		j++;
	}
}
