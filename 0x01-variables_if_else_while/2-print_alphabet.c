#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Prints the alphabet.
 * Return: 0
 */

int main(void)
{
int a = 97;

for (; a <= 122; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
