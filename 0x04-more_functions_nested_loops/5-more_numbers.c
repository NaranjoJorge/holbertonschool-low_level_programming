#include "holberton.h"

/**
 * more_numbers - Returns 1 when uppercase, 0 otherwise.
 * Return: void
 */

void more_numbers(void)
{
	int a = 0;
	int b;

	while (a < 11)
	{
		b = 0;
		while (b <= 14)
		{
			if (b > 9)
			{
				_putchar ((a / 10) + '0');
			}
			_putchar ((a % 10) + '0');
			b++;
		}
		a++;
	}
	_putchar('\n');
}
