#include "lists.h"

/**
 * before- function that prints a string
 * before the main function is executed
 * Return: Always 0.
 */

void before(void) __attribute__((constructor));
void before(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");

}

