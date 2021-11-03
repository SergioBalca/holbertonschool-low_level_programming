#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name- prints a name
 * @name: name of the person
 * @f: is a pointer to a function that
 * has a (char *) argument and returns (void)
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
