#include "main.h"

/**
 * _strncpy- copies a string into another string
 * @dest: resulting string
 * @src: string to be copied to dest
 * @n: number of characters to be copied from src to dest
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int j = 0;
int k = 0;
int i = 0;
int h;

while (src[j] != '\0')
{
j++;
}
if (j >= n)
{
while (k < n)
{
dest[i] = src[k];
k++;
i++;
}
while (dest[i] != '\0')
{
i++;
}
dest[i] = '\0';
return (dest);
}
else
{
h = j;
while (h < n)
{
dest[h] = '\0';
h++;
}
while (src[k] != '\0')
{
dest[i] = src[k];
k++;
i++;
}
return (dest);
}
}
