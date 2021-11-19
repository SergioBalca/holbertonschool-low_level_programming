#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (n > ULONG_MAX || index > UINT_MAX)
	{
		return (-1);
	}		
	
	bit = (n >> index) & 1;
	
	return (bit);
}
