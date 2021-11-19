#include "main.h"

/**
 * clear_bit- sets the value of a bit to 0 at a given index
 * @n: pointer to a number
 * @index: the index of the bit you want to set to 0
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	*n &= ~(1UL << index);
	return (1);
}
