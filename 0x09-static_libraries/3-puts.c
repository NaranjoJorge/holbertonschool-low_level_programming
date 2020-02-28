#include "holberton.h"

/**
 * _puts - Prints string str.
 * @str: char *str
 * Return: void.
 */


void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar (*(str + i));
	}

	_putchar('\n');

}
