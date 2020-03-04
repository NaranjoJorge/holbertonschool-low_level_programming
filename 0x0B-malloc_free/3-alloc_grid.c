#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - Returns pointer to 2-dimensional array.
 * @width: columns.
 * @height: rows.
 * Return: pointer to 2-dimensional array.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);

	/*if (p == NULL)*/

	for (i = 0; i < height; i++)
	{
		*(p + i) = malloc(sizeof(int) * width);
		if (*(p + i) == NULL)
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(*(p + i));
			}
				free(p);
				return (NULL);
		}
	}
	for (j = 0; j < width; j++)
		*(p + i) = 0;
	return (p);
}
