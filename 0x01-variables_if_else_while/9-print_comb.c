#include <stdio.h>

/**
 * main - prints 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
 * Return: 0
 */

int main(void)
{
	int numbers = 48;

	while (numbers < 58)
	{
		putchar(numbers);

		if (numbers < 57)
		{
		putchar(',');
		putchar(' ');
		}
		numbers++;
	}
	putchar('\n');
	return (0);
}
