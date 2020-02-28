#include "holberton.h"

/**
 * _memcpy - Copies n-bytes from src to dest
 * @dest:char pointer
 * @src:char pointer
 * @n:Integer
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, a;

	for (i = 0, a = 0; a < n; i++, a++)
	{
		*(dest + i) = *(src + a);
	}

	return (dest);
}
