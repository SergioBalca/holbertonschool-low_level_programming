#include "main.h"

/**
 * get_bit- returns the value of a bit at a given index
 * @n: decimal number
 * @index: index of the bit you want to get
 * Return: the value of the bit at index
 * or -1 if an error ocurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (n == ULONG_MAX)
	{
		return (-1);
	}

	if (index == UINT_MAX)
	{
		return (-1);
	}

	bit = (n >> index) & 1;
	return (bit);
}
