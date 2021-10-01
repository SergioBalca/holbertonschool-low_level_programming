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
int n;
int ld;

srand(time(0));
n = rand() - RAND_MAX / 2;
ld = n % 10;

if (ld > 5)
{
char str5[50] = "and is greater than 5";

printf("Last digit of %d is %d %s\n", n, ld, str5);
}
else if (6 > ld && 0 != ld)
{
char str6[50] = "and is less than 6 and not 0";

printf("Last digit of %d is %d %s\n", n, ld, str6);
}
else
{
char str0[50] = "and is 0";

printf("Last digit of %d is %d %s\n", n, ld, str0);
}
return (0);
}
