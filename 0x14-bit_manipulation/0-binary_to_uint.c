#include "holberton.h"

/**
 * binary_to_uint - Function that converts binary to decimal.
 * @b: Pointer to string of 0s & 1s.
 * Return: Decimal representation of b.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	unsigned int i;

	if (b == NULL)
		return (0);

	i = 0;
	while (*(b + i))
	{
		if ((*(b + i) != 1) && (*(b + i) != 0))
			return (0);

		sum <<= 1;
		if (*(b + i) == '1')
			sum += 1;
		i++;
	}
	return (sum);
}
