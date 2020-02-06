#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints hexadecimals
 * Return: 0
 */

int main(void)
{
	int number = 48;
	int abc = 65;

	while (number < 58)

	{
		putchar(number);
		number++;
	}

	while (abc < 71)
	{
		putchar(abc);
		abc++;
	}

	putchar('\n');
	return (0);
}
