#include "main.h"

/**
 * _sqrt_recursion- returns the natural square root of a number
 * @n: number
 * Return: the natural square of n
 * if n does not have natural squeare root, return -1
 * if n is less than 0, return -1
 */

int _sqrt_recursion(int n)
{
int r = 0;

if (r % 10 == 0)
{
r = 1 + ((n - 1) / (1 + _sqrt_recursion(n - 1)));
return (r);
}
else
return (-1);
}
