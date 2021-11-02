#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog- creates a new dog, meaning that store is name
 * age and owner
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 * Return: a pointer to the data of the dog
 * or NULL if the functions fails
 */

char *_strcpy(char *s1, char *s2);
int _strlen(char *s);

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;

d = malloc(sizeof(dog_t));
if (d)
{
d->name = malloc(_strlen(name) + 1 * sizeof(char));
if (d->name)
{
d->owner = malloc(_strlen(owner) + 1 * sizeof(char));
}
if (d->owner)
{
_strcpy(d->name, name);
_strcpy(d->owner, owner);
d->age = age;
}
}
else
{
free(d);
d = NULL;
}
return (d);
}

/**
 * _strcpy- copies a string to another string
 * @s1: first string
 * @s2: second string
 * Return: the  content of s2 copied to s1
 */

char *_strcpy(char *s1, char *s2)
{
char *temp;
int i = 0;

temp = s1;

while (s2[i++])
{
temp[i] = s2[i];
}

temp[i] = '\0';
return (s1);
}

/**
 * _strlen- returns the length of a string
 * @s: parameter of the function
 * Return: the length of the string s
 */

int _strlen(char *s)
{
int count = 0;

while (*s != '\0')
{
count++;
s++;
}

return (count);
}
