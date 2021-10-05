#include "main.h"
/**
 * _islower- checks for lowercase character c
 *
 * Return: 1 if c is lower case
* Return: 0 otherwise
 */
int _islower(int c)
{
int result;

if ('a' <= c && 'z' >= c)
{
result = 1;
}
else
result = 0;
return (result);
}
