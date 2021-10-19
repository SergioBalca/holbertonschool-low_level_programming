/**
 * *_memset- fills memory with a constant byte
 * @s: parameter to be pointed
 * @b: character to be used to fill the memory pointed to by s
 * @n: number of characters to fill
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
