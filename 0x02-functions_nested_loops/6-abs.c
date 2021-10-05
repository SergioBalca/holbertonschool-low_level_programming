#include "main.h"
/**
 *_abs- computes the absolute value of an int
 *@n: is an int parameter
 * Return: absolute value of int
 */
int _abs(int n)
{
int result;

if (n < 0)
{
result = n * -1;
}
else
result = n;
return (result);
}
