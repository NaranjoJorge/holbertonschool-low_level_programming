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
	int i, a, c, d;
	char *s;

	if (s1 == NULL)
	{
		s1 = malloc(1);
		*s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = malloc(1);
		*s2 = '\0';
	}
	for (i = 0; *(s1 + i) != '\0'; i++)
	{}
	for (a = 0; *(s2 + a) != '\0'; a++)
	{}
	s = malloc(sizeof(char) * ((i + a) - 1));
	if (!s)
		return (NULL);
	for (c = 0; c < i; c++)
	{
		*(s + c) = *(s1 + c);
	}
	for (d = 0; d < a; d++, c++)
	{
		*(s + c) = *(s2 + d);
	}
	*(s + c) = '\0';
	return (s);
}
