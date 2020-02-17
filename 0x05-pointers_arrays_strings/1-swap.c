#include "holberton.h"

/**
 * swap_int - Swaps values of *a *b
 * @a: int *a
 * @b: int *b
 * Return: Void.
 */

void swap_int(int *a, int *b)
{
	int ip = *a;

	*a = *b;
	*b = ip;
}
