#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day.
 * Return: void
 */

void jack_bauer(void)
{
	int a = 0;

	int b, c, d;

	while (a < 3)
	{
		b = 0;
		while (b < 4)
		{
			c = 0;
			while (c < 6)
			{
				d = 0;
				while (d < 10)
				{
					_putchar (a + '0');
					_putchar (b + '0');
					_putchar (':');
					_putchar (c + '0');
					_putchar (d + '0');
					_putchar ('\n');
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}

}
