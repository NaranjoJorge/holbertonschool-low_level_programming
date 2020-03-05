#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers.
 * @min: value of position 0 of array.
 * @max: value of last position of array.
 * Return: Pointer to array.
 */

int *array_range(int min, int max)
{
	int a, b;

	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min) + 1);

	if (!ptr)
		return (NULL);

	for (a = 0, b = min; b <= max; a++, b++)
		*(ptr + a) = b;

	return (ptr);
}
