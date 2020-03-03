#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -Allocates space in memory which contains a copy  * of str.
 * @str: string.
 * Return: Pointer to duplicated string.
 */

char *_strdup(char *str)
{
	int i, a;
	char *s;

	for (i = 0; *(str + i) != '\0'; i++)
	{}

	s = malloc(sizeof(char) * i);

	for (a = 0; a < i; a++)
		*(s + a) = *(str + a);

	*(s + a) = '\0';

	if (s == NULL)
		return (NULL);

	return (s);
}
