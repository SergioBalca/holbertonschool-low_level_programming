#include <stdio.h>
#include "main.h"
/**
 * main-  finds and prints the sum of the even-valued terms,
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	unsigned int i;
	unsigned int n = 4000000;
	/*initialize first and second numbers*/
	unsigned int n1 = 1;
	unsigned int n2 = 2;
	unsigned int sum = 0;

	/*initialize next number*/
	unsigned int n3 = n1 + n2;

	/*prints third to nth numbers*/
	for (i = 3; i <= n ; i++)
	{
		if (n3 % 2 == 0)
		{
			sum += n3;
		}
		n1 = n2;
		n2 = n3;
		n3 = n1 + n2;
	}
	printf("%u\n", sum);
	return (0);
}
