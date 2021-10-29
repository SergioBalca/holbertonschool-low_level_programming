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

if (len(s2) >= n)
{
size = len(s1) + n + 1;
}
size = len(s1) + len(s2) + 1;
ptr = malloc(sizeof(char) * size);
if (ptr == NULL)
return ('\0');
if (s1 != NULL)
{
for (i = 0; s1[i] != '\0'; i++)
ptr[i] = s1[i];
}
if (len(s2) >= n)
{
if (s2 != NULL)
{
for (j = 0; j < n; j++, i++)
{
ptr[i] = s2[j];
}
}
}
else
{
if (s2 != NULL)
{
for (j = 0; s2[j] != '\0'; j++, i++)
ptr[i] = s2[j];
}
}
ptr[i] = '\0';
return (ptr);
}
/**
 * len- returns the lenght of a string
 * @s: string
 * Return: an int that represent the length of s
 */

unsigned int len(char *s)
{
unsigned int i = 0;

if (s == NULL)
return (0);
while (s[i] != '\0')
{
i++;
}
return (i);
}
