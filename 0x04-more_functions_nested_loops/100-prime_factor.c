#include <stdio.h>
#include "main.h"
/**
 * main- prints the first 50 Fibonacci numbers,
 * starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	long int n = 612852475143;
	long int div = 2;
	long int max_fact;

	while (n != 0)
	{
		if (n % div != 0)
		{
			div += 1;
		}
		else
		{
			max_fact = n;
			n = n / div;
			if (n == 1)
			{
				printf("%ld\n", max_fact);
				break;
			}
		}
	}
	return (0);

}
