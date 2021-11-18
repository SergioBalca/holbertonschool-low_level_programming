#include "main.h"

/**
 * binary_to_uint- converts a binary number to an unsigned int
 * @b: a pointer to a sting of 0 and 1 chars
 * Return: the converted unsigned int number
 * or 0 if b is NULL or there is at least one char different
 * from 1 or 0 in the string
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1;
	unsigned int i = 0;
	int c;
	unsigned int len = 0;

	if (!b)
	{
		return (0);
	}
	while (b[len])
	{
		len++;
	}

	for (c = len - 1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
		{
			return (0);
		}
		if (b[c] == '1')
		{
			i += k;
		}
		k *= 2;
	}

	return (i);
}
