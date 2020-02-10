#include "holberton.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet  10 times, then  new line.
 */

void print_alphabet_x10(void)
{
	char a;
	int b = 0;

	while (b < 11)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}

		_putchar('\n');
		b++;
	}

}
