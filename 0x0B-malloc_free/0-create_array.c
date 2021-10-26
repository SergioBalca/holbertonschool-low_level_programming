#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array- creates an array of chars, and initializes it with a char
 * @size: number of times the character will be printed
 * @c: character to be printed
 * Return: NULL if size = 0
 * or a pointer to the array
 * or NULL, if it fails
 */

char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int i = 0;

ptr = malloc(size * sizeof(char));

if (ptr == NULL)
{
return ('\0');
}
else
{
if (size != 0)
{
while (i < size)
{
ptr[i] = c;
i++;
}
return (ptr);
}
else
{
return ('\0');
}
}
return (0);
}
