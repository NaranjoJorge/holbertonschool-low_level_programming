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
printf("%u: is positive");
}
else if (n < 0)
{
printf("%d: is negative");
}
else
{
printf("%u: is zero");
}
return (0);
}
