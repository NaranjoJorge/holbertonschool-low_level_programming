#include "holberton.h"

/**
 * print_rev - Prints string s in reverse.
 * @s: char *s.
 * Return: void.
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{}

	while (i >= 0)
	{
		_putchar (*(s + i));
		i--;
	}

	_putchar ('\n');

}
