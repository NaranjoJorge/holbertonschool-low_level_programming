#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcat -Concatenates src to dest
 * @dest: char *dest
 * @src: char *src
 * Return: *dest
 */

char *_strcat(char *dest, char *src)
{
	int i, a;

	for (i = 0; *(dest + i) != '\0'; i++)
	{}

	for (a = 0; *(src + a) != '\0'; a++, i++)
	{
		*(dest + i) = *(src + a);
	}

	return (dest);
}

/**
 * *str_concat -Concatenates 2 strings.
 * @s1: string where s1 & s2 will be concatenate.
 * @s2: string.
 * Return: Pointer to concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
	char *s;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	/* *s1 */
	_strcat(s1, s2);

	s = malloc(sizeof(s1));

	return (s);
}
