#include "holberton.h"

/**
 * get_bit -
 * @n:
 * @index:
 * Return: 
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/*unsigned long int counter;*/

	n >>= index;

		/*for (counter = 0; counter == index; counter++)
		n >>= counter;
		*/

	n = n & 1;
	return (n);
}
