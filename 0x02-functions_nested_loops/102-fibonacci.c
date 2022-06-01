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
	long int n1 = 1;
	long int n2 = 2;

	/*initialize next number*/
	long int n3 = n1 + n2;

	/*prints the first two numbers*/
	printf("%ld, %ld, ", n1, n2);
	/*prints third to nth numbers*/
	for (i = 3; i <= n ; i++)
	{
		if (i == n)
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
