#include "holberton.h"

/**
 * times_table - Prints 9 times table.
 * Return: void
 */

void times_table(void)
{
	int a;
	int b = 0;

	while (b <= 9)
	{
		a = b * 9;
		_putchar (a);
		b++;
	}
}
