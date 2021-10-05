#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_alphabet - prints the alphabet in lower case and adds a new line
 */
void print_alphabet(void)
{
int ch;

for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
}
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
/**
 * _islower- checks for lowercase character c
 *
 * Return: 1 if c is lower case
 * Return: 0 otherwise
 */
int _islower(int c)
{
int result;

if ('a' <= c && 'z' >= c)
{
result = 1;
}
else
result = 0;
return (result);
}
/**
 * _isalpha(int c) - checks for alphabetic character c
 * Return 1 if c is a letter, lowercase of uppercase
 * Return 0 otherwise
 */
int _isalpha(int c)
{
int result;

if ('A' <= c && 'z' >= c)
{
result = 1;
}
else
result = 0;
return (result);
}
/**
 * print_sign()- prints the sign of a number
 * Return 1 and prints + if n is greater than zero
 * Return 0 and prints 0 if n is zero
 * Return -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
int result;

if (n > 0)
{
result = 1;
_putchar('+');
}
else if (n == 0)
{
result = 0;
_putchar('0');
}
else
{
result = -1;
_putchar('-');
}
return (result);
}
