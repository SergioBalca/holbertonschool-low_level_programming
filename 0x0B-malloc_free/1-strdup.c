#include "main.h"
#include <stdlib.h>

/**
 * _strdup- returns a pointer to a newly allocated space in memory
 * @str: string argument
 * Return: NULL, if str = NULL
 * also returns NULL, if there is no sufficient space memory
 * on success, returns a pointer to the duplicated string
 */

char *_strdup(char *str)
{
char *ptr;
char *sc;
int i = 0;
int size;

if (str == NULL)
{
return ('\0');
}

while (str[i] != '\0')
{
i++;
}
size = i + 1;
ptr = (char *)malloc(sizeof(char) * size);

if (ptr == NULL)
{
return ('\0');
}
sc = ptr;
while (*str)
{
*sc = *str;
sc++;
str++;
}

*sc = '\0';
return (ptr);
}

