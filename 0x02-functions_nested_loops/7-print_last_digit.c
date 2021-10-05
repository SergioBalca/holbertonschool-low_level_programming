#include "main.h"
/**
 *print_last_digit- prints the las digit of a number
 * @n: an int parameter
 * Return: the value of the last digit
 *
 */
int print_last_digit(int n)
{
int result;

if (n < 0)
{
int p = n * -1;
result = p % 10;
}
else
result = n % 10;
return (result);
}
