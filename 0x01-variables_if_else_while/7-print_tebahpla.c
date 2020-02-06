#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints numbers 0 to 9 only using putchar.
 * Return: 0
 */

int main(void)
{
	int zyx = 122;

	while (zyx > 96)
	{
		putchar(zyx);
		zyx--;
	}
	putchar('\n');
	return (0);
}
