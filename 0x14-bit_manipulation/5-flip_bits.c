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
	unsigned long int counter;

	n = n ^ m;

	for(i = 0; i <= 1UL; i++)
	{
		if(n & 0b1)
			counter += 1;
		n >>= 1;
		i++;
	}

	return (counter);
}
