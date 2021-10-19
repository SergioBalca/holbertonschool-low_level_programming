#include "main.h"

/**
 * *_memcpy- copies memory area
 * @dest: dest parameter
 * @src: memory area to be copied to memory area dest
 * @n: number of bytes to copy from src to dest
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}
