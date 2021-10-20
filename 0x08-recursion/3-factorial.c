#include "main.h"

/**
 * factorial- returns the factorial of a given number
 * @n: given number to find its factorial
 * Return: factorial of n
 * if n is less than 0, returns -1 to indicate an error
 * the base case is, factorial of 0 is 1
 */

int factorial(int n)
{
int k;

if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (1);
}

k = n * factorial(n - 1);
return (k);
}

