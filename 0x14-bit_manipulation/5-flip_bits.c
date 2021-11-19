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

	n = n ^ m;
	while (n)
	{
		count_bit += n & 1;
		n >>= 1;
	}

	return (count_bit);
}

