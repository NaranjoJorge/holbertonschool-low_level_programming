#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Print n elements of string a.
 * @a: int  *a
 * @n: int n
 * Return: void.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", *(a + i));
	}

	printf("\n");
}
