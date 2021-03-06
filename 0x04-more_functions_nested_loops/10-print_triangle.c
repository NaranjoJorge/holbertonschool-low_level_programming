#include "holberton.h"

/**
 * print_triangle - Prints a triangle.
 * @size: Integer
 * Return: void.
 */

void print_triangle(int size)
{
	int a, b;

	while (size > 0)
	{
		a = 1;
		while ((size - a) > 0)
		{
			_putchar (' ');
			a++;
		}

		b = 1;
		while ((size - (size - b)) >= 1)
		{
			_putchar(35);
			/*b++;*/
			b--;
		}
		size--;
		_putchar('\n');
	}

	if (size <= 0)
		_putchar ('\n');
}
