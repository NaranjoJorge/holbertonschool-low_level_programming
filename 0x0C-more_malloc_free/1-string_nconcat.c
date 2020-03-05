#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @n: unsigned int.
 * @s1: string.
 * @s2: string.
 * Return: pointer to concatenation.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c, d;

	char *ptr;

	if (s1 == NULL)
		s1 = NULL;

	if (s2 == NULL)
		s2 = NULL;

	for (a = 0; s1[a]; a++)
	{}
	a--;

	for (b = 0; b <= (n - 1) && s2[b] != '\0'; b++)
	{}

	ptr = malloc(a + b);

	if (!ptr)
                return (NULL);

	for (c = 0; c <= a; c++)
		*(ptr + c) = s1[c];

	for (d = 0; d < b; c++, d++)
		*(ptr + c) = s2[d];

	*(ptr + c) = '\0';
	return (ptr);
}
