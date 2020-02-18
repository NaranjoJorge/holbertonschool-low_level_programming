#include "holberton.h"

/**
 * print_rev - Prints string s in reverse.
 * @s: char *s.
 * Return: void.
 */

void print_rev(char *s)
{
	char rev[200];
	int i, a;

	for (i = 0; *(s + i) != '\0'; i++)
	{}

	for (a = 0; i >= 0; a++, i--)
	{
		*(rev + a) = *(s + i);
		_putchar (*(rev + a));
	}

	_putchar ('\n');

}
