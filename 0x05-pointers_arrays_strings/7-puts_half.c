#include "main.h"

/**
 * puts_half- prints the second half of a string
 * if length is odd, prints the last character
 * otherwise, prints the second half of the string
 * @str: function parameter
 * Return: Always 0.
 */

void puts_half(char *str)
{
int count = 0;
int en = string_length(str) / 2;
int on = (string_length(str) + 1) / 2;

if (string_length(str) % 2 == 0)
{
int count = 0;

while (str[count] != '\0')
{

while (en <= count)
{
_putchar(str[count]);
en++;
}
count++;
}
}

else
{
while (str[count] != '\0')
{

while (on <= count)
{
_putchar(str[count]);
on++;
}
count++;
}

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
