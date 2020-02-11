#include "holberton.h"

/**
 * _abs - computes absolute value of an integer.
 * @i: number
 * Return: 0
 */

int _abs(int i)
{

	if (i < 0)
	{
		i *= -1;
		return (i);
	} else if (i > 0)
		return (i);
	else if (i == 0)
		return (i);

	return (0);
}
