#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;

ch = 0;
while (ch <= 9)
{
putchar(ch);
putchar(',');
putchar(' ');
ch++;
}
putchar('\n');
return (0);
}
