#include "holberton.h"

/**
 * _strcpy - Copies string in src to buffer in dest.
 * @dest: char *dest
 * @src: char *src
 * Return: Void.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
