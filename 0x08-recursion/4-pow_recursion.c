#include "main.h"

/**
 ** _pow_recursion-returns the value of x raised to the power of y
 * @x: the base number
 * @y: power
 * Return: x to the power y
 * if y is less than 0, return -1
 */

int _pow_recursion(int x, int y)
{
int c;

if (y < 0)
{
return (-1);
}

else if (y == 0 || x == 1)
{
return (1);
}

c = x * _pow_recursion(x, y - 1);
return (c);
}
