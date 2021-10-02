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
int B;

for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (B = 'A'; B <= 'Z'; B++)
putchar(B);
putchar('\n');
return (0);
}
