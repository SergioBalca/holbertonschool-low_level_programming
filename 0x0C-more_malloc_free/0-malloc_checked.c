#include "main.h"
#include <stdlib.h>


/**
 * malloc_checked- allocates mamory using malloc
 * @b: is the size of memory to be allocated
 * Return: on succes, returns a pointer to the allocated memory
 * on failure, returns 98
 */

void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit (98);
}
return (ptr);
}
