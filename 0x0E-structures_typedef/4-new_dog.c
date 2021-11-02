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

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;

d = malloc(sizeof(dog_t));
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
memcpy(d->name, d, sizeof(dog_t));
memcpy(d->owner, d, sizeof(dog_t));
}
else
{
free(d);
d = NULL;
}
return (d);
}
