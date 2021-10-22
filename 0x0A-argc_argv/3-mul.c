#include <stdio.h>
#include <stdlib.h>
#define UNUSED(x) (void)(x)

/**
 * main - prints the number of arguments passed into the program
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 * Return: 0 if there is arguments passed to the program
 * or 1 otherwise, and an error message is printed
 */

int main(int argc, char *argv[])
{
int i;
int mult = 1;

if (argc > 1)  /*if there is not arguments passed to the program, argc = 1*/
{
for (i = 1; i < argc; i++)
{
mult *= atoi(argv[i]);
}
printf("%d\n", mult);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
