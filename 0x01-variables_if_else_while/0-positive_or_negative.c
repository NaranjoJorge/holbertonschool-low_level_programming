#include <stdio.h>
#include <time.h>

/**
 * main - Prints whether random assigned variable is +,-, || == 0.
 * Return: 0
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%u: is positive", n);
}
else if (n < 0)
{
printf("%d: is negative", n);
}
else
{
printf("%u: is zero", n);
}
return (0);
}
