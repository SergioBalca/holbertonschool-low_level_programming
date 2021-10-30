#include "main.h"
#include <stdlib.h>

/**
 * _realloc- eallocates a memory block
 * @ptr: a pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: size, in bytes, of new memory block
 * Return: a pointer to the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
ptr = malloc(old_size);
if (ptr == NULL)
{
free(ptr);
ptr = malloc(new_size);
}
if (new_size > old_size)
{
ptr = malloc(new_size);
}
if (new_size == old_size)
{
return (ptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
return (ptr);
}
