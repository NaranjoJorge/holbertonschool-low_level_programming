#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _memset - Fills memory with constant bytes
 * @s:char *
 * @b:char
 * @n:int
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: # of elements in array.
 * @size: size of elements.
 * Return: Pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void  *ptr;

	ptr = malloc(nmemb * size);

	if (!ptr)
		return (NULL);

	if (nmemb == 0 || size == 0)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
