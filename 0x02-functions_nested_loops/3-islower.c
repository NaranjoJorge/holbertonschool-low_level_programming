#include "holberton.h"

/*New line is being taken automatically */

/**
 * _islower - returns 1 if c is lowercase, 0 otherwise.
 * @c: A lowercase or uppercase letter.
 * Return: 0 or 1.
 */
int _islower(int c)
{
	if (c > 96 && c < 123)

		return (1);
	else
		return (0);

}
