#include "holberton.h"

/**
 * print_diagonal - Prints _ n-times if n > 0.
 * @n: Integer
 * Return: void.
 */

void print_diagonal(int n)
{
	int a, i = 0;

	while (i < n)
	{
		a = 0;
		while (a < i)
		{
			_putchar(' ');
			a++;
		}
		_putchar(92);
		_putchar('\n');
		i++;
	}

	if (n <= 0)
		_putchar ('\n');
}
