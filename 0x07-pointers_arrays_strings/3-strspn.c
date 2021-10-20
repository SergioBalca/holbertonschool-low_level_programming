#include "main.h"

/**
 * _strspn- gets the length of a prefix substring
 * @s: string to be evaluated
 * @accept: string to found match
 * Return: number of bytes consisting in bytes from accept in s
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;

if (s[i] == '\0' || accept[i] == '\0')
{
return (i);
}

while (*s && _strchr(accept, *s++))
{
i++;
}
return (i);
}

/**
 * _strchr- locates a character in a string
 * @s: string to be evaluated
 * @c: character to look for in s
 * Return: a pointer to the first occurance of character c
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
int i = 0;

do {
if (s[i] == c)
{
return (s);
}
}

while (*s++);
return (0);
}
