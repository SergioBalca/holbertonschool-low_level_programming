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
char *p;
char *s3;

p = _allocate(s1, s2, n);
s3 = p;
s3 = _concat(s1, s2, n);
*s3 = '\0';
return (p);
}
/**
 * _allocate- allocates space memory for a concatenated string
 * @s1: first string
 * @s2: second string
 * @n: number of character of s2 to be concatenated
 * Return: a pointer to the new allocated space in memory
 * on failure, returns 0
 */
char *_allocate(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0;
unsigned int j = 0;
unsigned int size;
char *ptr;

while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;

if (j >= n)
{
size = i + n + 1;
ptr = malloc(sizeof(char) * size);
if (ptr == NULL)
{
return ('\0');
}
}
else
{
size = i + j + 1;
ptr = malloc(sizeof(char) * size);
if (ptr == NULL)
{
return ('\0');
}
}
return (ptr);
}
/**
 * len- calculates the lenght of a string
 * @s2: string
 * Return: lenght of s2
 */
unsigned int len(char *s2)
{
unsigned int j = 0;

while (s2[j] != '\0')
{
j++;
}
return (j);
}
/**
 * _concat- concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of characters of s2 to be concatenated
 * Return: a string concatenated
 */
char *_concat(char *s1, char *s2, unsigned int n)
{
unsigned int j = 0;
unsigned int h = 0;
unsigned int i = 0;

while (s2[j] != '\0')
{
j++;
}
if (j >= n)
{
while (h < n)
{
s1[i] = s2[h];
h++;
i++;
}
while (s1[i] != '\0')
{
i++;
}
s1[i] = '\0';
return (s1);
}
else
{
while (s2[j] != '\0')
{
s1[i] = s2[j];
i++;
j++;
}
}
s1[i] = '\0';
return (s1);
}
