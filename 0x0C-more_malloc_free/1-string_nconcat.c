#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat- concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of character of s2 to be concatenated
 * Return: a pointer that points to a new allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int i = 0;
unsigned int j = 0;
unsigned int size;

if (*s1 == '\0' && *s2 == '\0')
return ('\0');
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
if (j >= n)
{
size = i + j + 1;
}
size = i + n + 1;
ptr = malloc(sizeof(char) * size);
if (ptr == NULL)
return ('\0');
for (i = 0; s1[i] != '\0'; i++)
{
ptr[i] = s1[i];
}
if (j >= n)
{
for (j = 0; j < n; j++, i++)
{
ptr[i] = s2[j];
}
}
else
{
for (j = 0; s2[j] != '\0'; j++, i++)
{
ptr[i] = s2[j];
}
}
return (ptr);
}

