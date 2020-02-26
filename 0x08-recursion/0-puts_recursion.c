#include "holberton.h"

/**
 * _puts_recursion - Prints a string
 * @s: char pointer
 * Return: void
 */

void _puts_recursion(char *s)
{

	if (*s == '\0')
		_putchar('\n');

	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}

}
