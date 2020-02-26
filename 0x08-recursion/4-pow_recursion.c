#include "holberton.h"

/**
 * _pow_recursion - Return X to the power of Y, recursively
 * @x: int x
 * @y: int y
 * Return: X to the power of Y. Or error in y < 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
