#include "holberton.h"

/**
 * print_sign - returns -1, 0, or 1. Depending on the sign of the number.
 * @n: number
 * Return: -1, 0, or 1.
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar ('+');
		return (1);
	} else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	} else
	{
		_putchar ('0');
		return (0);
	}
}


/* Maybe add case for when argument is not a number. */

/*
 *+, 1
 *0, 0
 *+, 1
 *-, /
 */
