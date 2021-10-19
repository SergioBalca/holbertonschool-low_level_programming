#include "main.h"

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
