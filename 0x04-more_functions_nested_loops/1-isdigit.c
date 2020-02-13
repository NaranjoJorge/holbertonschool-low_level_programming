#include "holberton.h"

/**
 * _isdigit - Returns 1 if c is a digit.
 * @c: Integer
 * Return: 0 or 1.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
