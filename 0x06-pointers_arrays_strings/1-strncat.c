#include "holberton.h"

/**
 * _strncat - Copies n chars of src to dest.
 * @dest: char *dest
 * @src: char *src
 * @n: int n
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, a;

	for (i = 0; *(dest + i) != '\0'; i++)
	{}

	for (a = 0; a < n; a++, i++)
	{
		*(dest + i) = *(src + a);
	}

	return (dest);
}
