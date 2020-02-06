#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints numbers 0 to 9 only using putchar.
 * Return: 0
 */

int main(void)
{
	int number = 48;

	while (number < 58)

	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}
