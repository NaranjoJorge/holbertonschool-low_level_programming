#include "holberton.h"

/**
 * _strchr -Locates c in s.
 * @s:int char pointer
 * @c:int char
 * Return: a pointer to the first occurrence of the charac * ter c in s
 * or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	int pos = 0;

	for (; *(s + pos) != '\0'; pos++)
	{
		if (*(s + pos) == c)
			return ((s + pos));
	}
	return (0);
}
