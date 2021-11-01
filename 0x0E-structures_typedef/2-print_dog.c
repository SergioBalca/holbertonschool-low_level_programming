#include <stdio.h>
#include "dog.h"

/**
 * print_dog- prints the name, age and owner of a dog
 * This data is store in a struct dog structure
 * @d: struct dog type variable
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
if (d)
{
if (!d->name)
{
printf("Name: %s\n", (nil));
}
if (!d->age)
{
printf("Age: %s\n", (nil));
}
if (!d->owner)
{
printf("Owner: %s\n", (nil));
}
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
