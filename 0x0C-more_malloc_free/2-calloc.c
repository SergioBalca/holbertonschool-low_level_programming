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
char *ptr = NULL;
unsigned int i = 0;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = (void *)malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
for (; i < nmemb * size; i++)
{
ptr[i] = 0;
}
return (ptr);
}
