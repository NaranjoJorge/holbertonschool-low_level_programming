#include "holberton.h"

/**
 * set_bit - Sets bit of *n at position index to 1.
 * @n: unsigned long int.
 * @index: unsigned int.
 * Return: 1 if sucess, -1 if failed.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1;

	if (index > 64)
		return (-1);

	bit <<= index;
	*n = (*n | bit);

	return (1);
}
