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
char *sc = str;
int size;
char *ptr;
int i = 0;

while (str[i] != '\0')
{
i++;
}
size = i + 1;
ptr = malloc(size * (sizeof(char)));

if (str == NULL)
{
return (NULL);
}
else
{
while (str[i] != '\0')
{
ptr[i] = str[i];	
return (ptr);
}
}
return (0);
}
