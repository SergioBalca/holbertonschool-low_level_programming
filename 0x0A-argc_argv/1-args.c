#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - prints the number of arguments passed into the program
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int a;

UNUSED(argv);
a = argc - 1;
printf("%d\n", a);
return (0);
}
