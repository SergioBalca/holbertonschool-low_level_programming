#include <stdio.h>
#include "main.h"
/**
 * main- prints the first 50 Fibonacci numbers,
 * starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	int i;
	int n = 50;
	/*initialize first and second numbers*/
	long int n1 = 0;
	long int n2 = 1;

	/*initialize next number*/
	long int n3 = n1 + n2;

	/*prints the first two numbers*/
	printf("%ld, ", n2);
	/*prints third to nth numbers*/
	for (i = 3; i <= n + 1; i++)
	{
		if (i == n + 1)
			printf("%ld\n", n3);
		else
		{
			printf("%ld, ", n3);
			n1 = n2;
			n2 = n3;
			n3 = n1 + n2;
		}

	}
	return (0);
}
