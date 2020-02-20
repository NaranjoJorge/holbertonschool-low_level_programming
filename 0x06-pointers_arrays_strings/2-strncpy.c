#include "holberton.h"

/**
 * _strncpy -Copies/replaces n elements of *src to *dest.
 * @dest: char *dest
 * @src: char *src
 * @n: int n
 * Return: Newly version of dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, a;

	for (a = 0, i = 0; a < n; a++, i++)
	{
		*(dest + i) = *(src + a);
	}

	return (dest);
}
