#include "holberton.h"
/**
 * rot13 - Encode string s to rot13.
 * @s: char *s
 * Return: s.
 */

char *rot13(char *s)
{
	int i, a;

	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (a = 0; *(alpha + a) != '\0'; a++)
		{
			if (*(s + i) == *(alpha + a))
				*(s + i) = *(rot13 + a);
		}
	}
	return (s);
}
