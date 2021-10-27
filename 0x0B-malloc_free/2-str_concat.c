#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
int i = 0;
int j = 0;
char *s3 = s1;
char *ptr;
int size;

while (s1[i] != '\0')
{
i++;
}

while (s2[j] != '\0')
{
s3[i] = s2[j];

j++;
i++;
}
size = j + i + 1;
ptr = (char *)malloc(sizeof(char) * size);
ptr = s3;

*ptr = '\0';

return (ptr);
}
