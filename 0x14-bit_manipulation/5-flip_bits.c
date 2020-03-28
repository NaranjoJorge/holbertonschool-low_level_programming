#include "holberton.h"

/**
 * flip_bits - Returns # of bits needed to flip to get from n to m.
 * @n: unsigned long int.
 * @m: unsigned long int.
 * Return: Flips.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, counter = 0;
	unsigned long int z = 1;

	n = n ^ m;

	for (i = 0; i <= 1000000000; i++)
	{
		if (n & z)
			counter += 1;
		n >>= 1;
		i++;
	}

	return (counter);
}
