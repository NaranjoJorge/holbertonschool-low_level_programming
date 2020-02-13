#include "holberton.h"

/**
 * print_most_numbers - Prints 0 to 9; except 2 & 4.
 * Return: void.
 */

void print_most_numbers(void)
{
	int a = 48;

	while (a <= 57)
	{
		if (a != 50 && a != 52)
		{
			_putchar (a);
		}
		a++;
	}
	_putchar ('\n');
}
