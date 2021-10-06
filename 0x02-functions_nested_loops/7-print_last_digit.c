#include "main.h"
/**
 *print_last_digit- prints the las digit of a number
 * @n: an int parameter
 * Return: the value of the last digit
 *
 */
int print_last_digit(int n)
{
int ld = n % 10;

if (ld < 0)
{
ld = ld * -1;
}
_putchar(ld + 48);
return (ld);
}
