#include "main.h"

/**
 * _strcpy-  copies the string pointed to by src
 * @dest: first parameter
 * @src: second parameter
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
char *cpy = dest;
int count = 0;

while (src[count] <= '\0')
{
*cpy = src[count];
}

return (dest);
}
