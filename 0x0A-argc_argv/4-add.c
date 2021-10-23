#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds the arguments passeds to the program
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 * Return: 1 when one of the arguments is not a number
 * or 0 otherwise
 */

int main(int argc, char *argv[])
{
int i = 1;
int sum = 0;

if (argc > 1)
{
while (i < argc)
{
if (*argv[i] >= '0' && *argv[i] <= '9')
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
i++;
}
printf("%d\n", sum);
}
else
{
printf("0\n");
}
return (0);
}
