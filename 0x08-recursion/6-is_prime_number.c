#include "main.h"

/**
 * is_prime_number- evaluates if a number is prime
 * @n: number to be evaluated
 * Return: 1 if n is prime
 * 0 otherwise
 */

int is_prime_number(int n)
{
if (n < 0 || n == 0 || n == 1 || n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
{
return (0);
}
else if (n % 7 == 0 || n % 11 == 0 || n % 13 == 0)
{
return (0);
}
else
return (1);
}
