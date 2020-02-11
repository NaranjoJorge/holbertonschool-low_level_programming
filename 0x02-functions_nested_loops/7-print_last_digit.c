#include "holberton.h"

/**
 * print_last_digit - prints last digit of an integer.
 * @i: number
 * Return: 0.
 */

int print_last_digit(int i)
{
	int a = i % 10;

	if (i < 0)
		a *= -1;

	_putchar (a + '0');
	return (a);
}
