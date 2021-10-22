#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - prints the name of the program
 * @argc: the number of command line arguments
 * @argv: array that contains the program command line arguments
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
UNUSED(argc);
printf("%s\n", argv[0]);
return (0);
}
