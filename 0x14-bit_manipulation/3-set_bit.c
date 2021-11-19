#include "main.h"

/**
 * set_bit- sets the value of a bit to 1 at a given index
 * @n: pointer to a number
 * @index: the index of the bit you want to set
 * Return: 1 if works or -1 if it fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	*n |= 1UL << index;

	return (1);

}
