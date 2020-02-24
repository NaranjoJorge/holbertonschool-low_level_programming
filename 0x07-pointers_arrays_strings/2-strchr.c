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
	for (; *s != '\0'; ++s)
		if (*s == c)
			return (s);

	return ((char *) 0);
}
