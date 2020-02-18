#include "holberton.h"

/**
 * puts_half - Prints second half of string str.
 * @str: char *str
 * Return: Void.
 */

void puts_half(char *str)
{
	int i, a;

	for (i = 0, a = 0; *(str + i) != '\0'; i++, a++)
	{
		a += 1;
	}

	if (a % 2 != 0)
	{
		for (i = (i - 1) / 2; *(str + i) != '\0'; i++)
			_putchar (*(str + i));
	} else if (a % 2 == 0)
	{
		for (i = i / 2; *(str + i) != '\0'; i++)
			_putchar (*(str + i));
	}

	_putchar ('\n');
}
