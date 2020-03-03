#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -creates an array of chars, and initializes it * with char c.
 * @size: Size of array.
 * @c: char that array will be initialized with.
 * Return: Pointer to array.
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(s + i) = c;

	*(s + i) = '\0';
	return (s);
}
