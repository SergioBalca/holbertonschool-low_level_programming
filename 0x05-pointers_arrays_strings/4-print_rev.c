#include "main.h"

/**
 * print_rev- prints a string in reverse
 * @s: string to be reverse
 * Return: Always 0
 */


void print_rev(char *s)
{
int count;

for (count = string_length(s) - 1; count >= 0; count--)
{
_putchar(s[count]);
}

_putchar('\n');
}

/**
 * string_length- gives the length of a string
 * @pointer: parameter of the function
 * Return: the length of the string
 */

int string_length(char *pointer)
{
int c = 0;

while (*(pointer + c) != '\0')
c++;

return (c);
}
