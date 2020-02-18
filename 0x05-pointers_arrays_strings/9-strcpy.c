#include "holberton.h"

/**
 * _strcpy - Copies string in src to buffer in dest.
 * @dest: char *dest
 * @src: char *src
 * Return: dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}

	if (*(src + (i + 1)) == '\0')
	{
		*(dest + (i + 1)) = *(src + (i + 1));
	}

	return (dest);
}
