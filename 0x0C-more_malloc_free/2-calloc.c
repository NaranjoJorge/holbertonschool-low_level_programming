#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: # of elements in array.
 * @size: size of elements.
 * Return: Pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	/*unsigned int*/
	unsigned int *ptr;

	ptr = malloc(nmemb * size);

	if (!ptr)
		return (NULL);

	if (nmemb == 0 || size == 0)
		return (NULL);

	for (i = 0; i == (nmemb - 1); i++)
		*(ptr + i) = 48;
	i--;

	/* no space/addition on '\0' */

	return (ptr);
}
