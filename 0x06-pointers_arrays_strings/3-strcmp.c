#include "main.h"

/**
 * _strcmp- compares two strings
 * @s1: first string
 * @s2: second string
 * Return: the difference between the two strings
 * using ASCCI values and pointers arithmetic
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;
int result;

while (s1[i] != '\0')
{
if (s1[i] - s2[i] == 0)
{
i++;
}
else 
break;
}

result = s1[i] - s2[i];
return (result);
}
