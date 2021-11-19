#include "main.h"

/**
 * flip_bits- returns the number of bits you would need
 * to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: the number of bits you need to flip to get from
 * n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count_bit = 0;
	unsigned int xor = (n ^ m);

	while (xor)
	{
		count_bit++;
		xor &= (xor - 1);
	}

	return (count_bit);
}

