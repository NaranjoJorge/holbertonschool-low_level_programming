#include "holberton.h"
/**
 * cap_string - Capitalizes letters coming after separators & 1st letter.
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
		{
			if (i == 0)
				*s -= 32;
			for (b = 0; *(separator + b) != '\0'; b++)
				if (*(s + (i - 1)) == *(separator + b))
					*(s + i) -= 32;
		}
	}

	return (s);
}
