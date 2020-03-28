#include "holberton.h"
/**
 * set_bit -
 * @n: unsigned long int.
 * @index: unsigned int.
 * Return: 1 if sucess, -1 if failed.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned long int *flips, counter;

	n = n ^ m;
	flips = &n;

	for(i = 0; *(flips + i); i++)
	{
		if (*(flips + i) == 1)
			counter += 1;
	}

	return (counter);
}
