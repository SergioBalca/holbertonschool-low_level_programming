#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

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
if (!d)
{
return (NULL);
}
d->name = name;
d->age = age;
d->owner = owner;

return (d);
}
