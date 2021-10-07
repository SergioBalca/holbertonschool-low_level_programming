#include "main.h"
/**
 * _isupper- checks for uppercase character
 *@c: character to be evaluated
 * Return: 1 if c is uppercase
 * 0 otherwise
 */

int _isupper(int c)
{
int result;

if ('A' <= c && 'Z' >= c)
{
result = 1;
}

else
result = 0;
return (result);
}
