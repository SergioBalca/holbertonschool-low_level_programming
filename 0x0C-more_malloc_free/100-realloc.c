#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc- eallocates a memory block
 * @ptr: a pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: size, in bytes, of new memory block
 * Return: a pointer to the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *ptr_new;

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
return (malloc(new_size));
}
if (new_size > old_size)
{
ptr_new = malloc(new_size);
if (ptr_new)
{
memcpy(ptr_new, ptr, old_size);
free(ptr);
}
}
if (new_size == old_size)
{
return (ptr);
}

return (ptr_new);
}
