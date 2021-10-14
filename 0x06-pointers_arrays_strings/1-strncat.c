#include "main.h"

/**
 * _strncat- concatenates two strings
 * @dest: first string
 * @src: string to be concatenated
 * @n: int type parameter that indicates the
 * number of characters to concatenated
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int k = 0;
int j = 0;

while (dest[i] != '\0')
{
i++;
}

while (src[k] != '\0')
{
k++;
}

if (k >= n)
{
while (j < n)
{
dest[i] = src[j];

j++;
i++;
}

}

else
{
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
}

dest[i] = '\0';

return (dest);
}
