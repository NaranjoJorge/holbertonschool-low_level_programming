#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat -Concatenates 2 strings.
 * @s1: string where s1 & s2 will be concatenate.
 * @s2: string.
 * Return: Pointer to concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
	char *s12;
	int size = strlen(s1) + strlen(s2);

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	s12 = malloc(sizeof(char) * size);

	return (s12);
}
