#include <stdio.h>
#include "main.h"
/**
 * print_number- prints a number passed as argument
 * @n: number to print
 * Return: Nothing
 */
void print_number(int n)
{
	if (n >= 0)
	{
		if (n < 10)
		{
			_putchar(n + '0');
		}
		else if (n < 100)
		{
			/*to print the first digit*/
			_putchar(((n / 10)) + '0');
			/*to print second digit*/
			_putchar((n % 10) + '0');
		}

		else if (n < 1000)
		{
			_putchar((n / 100) + '0');
			_putchar(((n / 10) % 10) + '0');
			_putchar((n % 10) + '0');

		}

		else
		{
			_putchar((n / 1000) + '0');
			_putchar(((n / 100) % 10) + '0');
			_putchar(((n / 10) % 10) + '0');
			_putchar((n % 10) + '0');
		}
	}
	else
		print_negative_number(n);
}

/**
 * print_negative_number- prints a negative number passed as argument
 * @n: number to print
 * Return: Nothing
 */
void print_negative_number(int n)
{

	n *= -1;
	if (n < 10)
	{
		_putchar('-');
		_putchar(n + '0');
	}
	else if (n < 100)
	{
		_putchar('-');
		/*to print the first digit*/
		_putchar(((n / 10)) + '0');
		/*to print second digit*/
		_putchar((n % 10) + '0');
	}
	else if (n < 1000)
	{
		_putchar('-');
		_putchar((n / 100) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');

	}
	else
	{
		_putchar('-');
		_putchar((n / 1000) + '0');
		_putchar(((n / 100) % 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
}
