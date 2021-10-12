#include "main.h"

/**
 * print_rev- prints a string in reverse
 * @s: is the string to print in reverse
 * Return: the string s in reverse
 */

void print_rev(char *s)
{
int count = 0;

while (*s != '\0')
{
_putchar(s[count]);
count++;
s++;
}
_putchar('\n');
}
