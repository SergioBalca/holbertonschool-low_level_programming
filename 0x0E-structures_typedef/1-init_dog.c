#include "dog.h"
#include <stdio.h>

/**
 * init_dog- Initializes a variable of type struct dog
 * @d: variable to be initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name fo the owner of the dog
 * Return: nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (name || age || owner)
d->name = name;
d->age = age;
d->owner = owner;
}
