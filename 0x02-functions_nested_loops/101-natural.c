#include <stdio.h>
#include "main.h"
/**
 * main- prints the sum of multiples of 3 or 5 between 0 and 1024
 * Return: 0
 */
int main(void)
{
	int a;
	int sum = 0;

	for (a = 0; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			sum += a;
		}

	}
	printf("%d\n", sum);
	return (0);
}
