#include "holberton.h"

/**
 * _isalpha - returns 1 if c is lower/uppercase, 0 otherwise.
 * @c: A letter or number.
 * Return: 0 or 1.
 */

int _isalpha(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else if (c > 97  && c < 122)
		return (1);
	else
		return (0);

}
