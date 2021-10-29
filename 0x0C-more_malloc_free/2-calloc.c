#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc- allocates memory for an array
 * @nmemb: number of elements of the array
 * @size: size of type of argument
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int mul = nmemb * size;

ptr = malloc(mul);
memset(ptr, 0, mul);
if (ptr == NULL)
{
return ('\0');
}
if (nmemb == 0 || size == 0)
{
return ('\0');
}
return (ptr);
}
