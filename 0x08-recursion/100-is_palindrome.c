#include "main.h"

/**
 * _endofstring- reverses a string
 * @s: string to be reversed
 * Return: a pointer to the last character of the string
 */

int _endofstring(char *s)
{
int i;

if (*s != '\0')
{
s++;
i = 1 + _endofstring(s);
return (i);
}
return (0);
}

/**
 * _checkif- auxiliar function that compares a string with its reverse version
 * to determine if it is a palindrom
 * @s: string to be evaluated
 * @a: index to string
 * @b: index to reverse string
 * Return: 1 if string is palindrom or 0 if it is not
 */

int _checkif(char *s, int a, int b)
{
int k;

if (a >= b)
{
return (1);
}
if (s[a] == s[b])
{
k = _checkif(s, a + 1, b - 1);

return (k);
}
return (0);
}

/**
 * is_palindrome- evaluates if a string is a palindrom or not
 * @s: string to be evaluated
 * Return: 1 if s is a palindrom or 0 if it is not
 */

int is_palindrome(char *s)
{
int a, b, j;

a = 0;
b = _endofstring(s);
j = _checkif(s, a, b - 1);
return (j);
}
