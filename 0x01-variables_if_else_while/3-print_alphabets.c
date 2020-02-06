#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints
 * Return: 0
 */

int main(void)
{
int a = 97;
int b = 65;

for (; a <= 122; a++)
{
putchar(a);
}
for (; b <= 90; b++)
{
putchar(b);
}
putchar('\n');
return (0);
}
