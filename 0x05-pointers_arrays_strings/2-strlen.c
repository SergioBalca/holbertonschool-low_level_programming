#include "main.h"

/**
 * _strlen- returns the length of a string
 * @s: parameter of the function
 * Return: the length of the string s
 */

int _strlen(char *s)
{
int count = 0;

while (*s != '\0')
{
count++;
s++;
}

return (count);
}
