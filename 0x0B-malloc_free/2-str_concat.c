/**
 * str_concat- concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure
 * on success, returns a pointer to a new allocated space in memmory
 * wich contains the contents of s1 and s2
 */

#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
char *ptr;
char *s3;
int i = 0;
int j = 0;
int size;

if (*s1 == '\0' && *s2 == '\0')
{
return ('\0');
}
while (s1[i] != '\0')
{
i++;
}
while (s2[j] != '\0')
{
j++;
}
size = i + j + 1;
ptr = (char *)malloc(sizeof(char) * size);
if (ptr == NULL)
{
return ('\0');
}

s3 = ptr;
if (*s1 == '\0')
{
while (*s2 != '\0')
{
*s3 = *s2;
s3++;
s2++;
}
}
if (*s2 == '\0')
{
while (*s1 != '\0')
{
*s3 = *s1;
s3++;
s1++;
}
}
while (*s1 != '\0')
{
*s3 = *s1;
s3++;
s1++;
}
while (*s2 != '\0')
{
*s3 = *s2;
s3++;
s2++;
}
*s3 = '\0';
return (ptr);
}
