#include "main.h"
/**
 *_islower- checks for lowercase character c
 *@c: is an int type character and is the char to print
 *Return: 1 if c is lower case; 0 otherwise
 */
int _islower(int c) /*c is an int type parameter*/
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
