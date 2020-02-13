#include "holberton.h"

/**
 * print_line - Prints _ n-times if n > 0.
 * @n: Integer
 * Return: void.
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
		_putchar ('\n');

	else /*if (n > 0)*/
	{
		for  (a = 0; a < n; a++)
		{
			_putchar (95);
		}

		_putchar ('\n');
	}
}
