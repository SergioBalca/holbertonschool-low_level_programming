#include "main.h"
/**
 * print_alphabet_x10 - prints the alfhabet in lower case ten times
 */
void print_alphabet_x10(void)
{
int i = 0;
int ch;

while (i < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
i++;
}
}
