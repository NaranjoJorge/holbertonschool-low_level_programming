#include <stdio.h>

/**
 * main - prints hexadecimals
 * Return: 0
 */

int main(void)
{
	int number = 48;
	int abc = 97;

	while (number < 58)

	{
		putchar(number);
		number++;
	}

	while (abc < 103)
	{
		putchar(abc);
		abc++;
	}

	putchar('\n');
	return (0);
}
