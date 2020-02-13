#include "holberton.h"

/**
 * print_numbers - Prints numbers 0 to 9.
 * Return: void
 */

void print_numbers(void)
{
	int a = 48;

	while (a <= 57)
	{
		_putchar (a);
		a++;
	}

	_putchar('\n');
}
