#include "holberton.h"

/**
 * reverse_array - Returns reverse version of int *a
 * @a:int *a
 * @n:int n
 * Return: Reverse of int *a
 */

void reverse_array(int *a, int n)
{
	int i, b, z;

	for (b = 0, i = (n - 1); b < n; b++, i--)
	{
		z = *(a + b);
		*(a + b) = *(a + i);
		*(a + i) = z;
	}

}
