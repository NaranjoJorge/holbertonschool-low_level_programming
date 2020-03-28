#include "holberton.h"

/**
 * clear_bit - Sets bit of *n at position index to 0.
 * @n: unsigned long int.
 * @index: unsigned int.
 * Return: 1 if sucess, -1 if failed.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/* unsigned int counter; */

	if (index > 64)
		return (-1);

	if ((*(n + index)) == 1)
		*(n + index) = ~(*(n + index));

	return (1);
}
