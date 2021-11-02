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
if (!d)
{
return;
}
else
{
if (!d->name)
{
printf("Name: (nil)\n");
}
else
{
printf("Name: %s\n", d->name);
}
if (!d->age)
{
printf("Age: (nil)\n");
}
else
{
printf("Age: %f\n", d->age);
}
if (!d->owner)
{
printf("Owner: (nil)\n");
}
else
{
printf("Owner: %s\n", d->owner);
}
}
}
