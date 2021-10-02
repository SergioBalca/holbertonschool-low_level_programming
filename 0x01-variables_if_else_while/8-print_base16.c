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
int h;

for (ch = '0'; ch <= '9'; ch++)
putchar(ch);
for (h = 'a'; h <= 'f'; h++)
putchar('\n');
return (0);
}
