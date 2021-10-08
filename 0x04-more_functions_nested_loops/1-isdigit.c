#include "main.h"
/**
 * _isdigit- checks for a digit (0 through 9)
 *@c: the character to evaluate
 * Return: 1 if c is a digit
 * 0 otherwise
 */

int _isdigit(int c)
{
int result;

if ('0' <= c && '9' >= c)
{
result = 1;
}

else
result = 0;

return (result);
}
