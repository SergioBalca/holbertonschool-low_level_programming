#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog- frees dogs, meaning that the memory
 * where the name, age and owner of the dog is freed
 * @d: pointer to the structure dog that contains the dog data
 * Return: Nothing.
 */

void free_dog(dog_t *d)
{
free(d);
}
