#include "main.h"

/**
 * _strpbrk- searches a string for any of a set of bytes
 * @s: string to be evaluated
 * @accept: string to look for in s
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
int i = 0;

if (s[i] == '\0' || accept[i] == '\0')
{
return (0);
}

while (*s)
{
if (_strchr(accept, *s))
{
return (s);
}

else
{
s++;
}
}
return (0);
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
