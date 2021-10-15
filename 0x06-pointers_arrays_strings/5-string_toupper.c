#include "main.h"

/**
 * string_toupper- changes all lowercase letters of a string to uppercase
 * @c: character to be change from lowercase to uppercase
 * Return: the character in uppercase
 */

char *string_toupper(char *c)
{
int i;

for (i = 0; c[i] != '\n'; i++)
{
if (c[i] >= 'a' && c[i] <= 'z')
{
c[i] = c[i] - 'a' + 'A';
}
}
return (c);
}
