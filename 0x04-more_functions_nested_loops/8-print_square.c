#include "holberton.h"

/**
 * print_square - Prints a # of size '@size' if n > 0.
 * @size: Integer
 * Return: void.
 */

void print_square(int size)
{
	int a;
	int b = size;

	if (size <= 0)
		_putchar ('\n');

	while (size > 0)
	{
		a = 0;
		while (a < b)
		{
			_putchar (35);
			a++;
		}

		_putchar ('\n');
		size--;
	}

}
