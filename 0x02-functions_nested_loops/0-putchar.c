#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char input[11] = "_putchar\n";
int index;

for (index = 0; input[index] != '\0'; index++)
{
_putchar(input[index]);
}
return (0);
}
