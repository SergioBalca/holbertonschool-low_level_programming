#include "main.h"
/**
 *_isalpha- checks for alphabetic characters
 * @c: is the int type character to print
 * Return: 1 if c is a letter, lowercase of uppercase; 0 otherwise
 */
int _isalpha(int c)
{
int result;

if ('A' <= c && 'z' >= c)
{
result = 1;
}
else
result = 0;
return (result);
}
