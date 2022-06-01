#include <stdio.h>
#include "main.h"
/**
 * main- prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	unsigned int i;
	unsigned int n = 98;
	/*initialize first and second numbers*/
	unsigned int n1 = 1;
	unsigned int n2 = 2;

	/*initialize next number*/
	unsigned int n3 = n1 + n2;

	/*prints the first two numbers*/
	printf("%u, %u, ", n1, n2);
	/*prints third to nth numbers*/
	for (i = 3; i <= n ; i++)
	{
		if (i == n)
			printf("%u\n", n3);
		else
		{
			printf("%u, ", n3);
			n1 = n2;
			n2 = n3;
			n3 = n1 + n2;
		}

	}
	return (0);
}
