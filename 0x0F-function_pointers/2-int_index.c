#include "function_pointers.h"

/**
 * int_index - returns index of 1st element for which the cmp function does not
 * return 0.
 * @array: int array.
 * @size: int.
 * @cmp: function pointer.
 * Return: -1 if size < 1. Or index of the 1st element for which cmp does
 * not return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}
