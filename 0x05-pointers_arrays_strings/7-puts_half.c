#include "holberton.h"

/**
 * puts_half - Prints second half of string str.
 * @str: char *str
 * Return: Void.
 */

void puts_half(char *str)
{
	int i, a;
	char half[200];

	for (i = 0; *(str + i) != '\0'; i++)
	{}

	for (a = 0, i = (i/2); *(str + i) != '\0'; a++, i++)
	{
		*(half + a) = *(str + i);
		_putchar (*(half + a));
	}

	_putchar ('\n');
}
