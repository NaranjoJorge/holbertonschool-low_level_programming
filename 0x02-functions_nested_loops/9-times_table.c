#include "holberton.h"

/**
 * times_table - Prints 9 times table.
 * Return: void
 */

void times_table(void)
{
	int a = 0;
	int b, p;

	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			p = a * b;

			if (b == 9)
			if (p < 9)
			{
				_putchar (p + '0');
				_putchar (',');
				_putchar (' ');
				_putchar (' ');

			}

			if (p >= 9)
			{
				_putchar ((p / 10) + '0');
				_putchar ((p % 10) + '0');
				_putchar (',');
				_putchar (' ');
			}

			if (
			b++;
		}
		_putchar('\n');
		a++;
	}
}
