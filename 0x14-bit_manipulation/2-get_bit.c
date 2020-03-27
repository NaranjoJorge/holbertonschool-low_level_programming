#include "holberton.h"

/**
 * binary_to_uint - Function that converts binary to decimal.
 * @b: Pointer to string of 0s & 1s.
 * Return: Decimal representation of b.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int counter;

	/* n >>= index */

	for (counter = 0; counter == index; counter++)
		n >>= counter;

	n = n & 1;
	return (n);
}
