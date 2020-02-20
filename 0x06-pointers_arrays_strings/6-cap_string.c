#include "holberton.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @s: char *s.
 * Return: s.
 */

char *cap_string(char *s)
{
	int i, b;

	char separator[14] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}',
			      ' ', '\t', '\n', '\0'};

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if ((*(s + i) >= 97) && (*(s + i) <= 122))
			for (b = 0; *(separator + b) != '\0'; b++)
				if (*(s + (i - 1)) == *(separator + b))
					*(s + i) -= 32;
	}

	return (s);
}
