#include "holberton.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: char pointer
 * @accept: char pointer
 * Return: Bytes from initial segment s that consist only
 * of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{

	/* accept = oleh */
	/* s = hello world */
	int i, a;

	unsigned int k = 0;

	for (i = 0; *(accept + i) != '\0'; i++)
	{
		for (a = 0; *(s + a) != '\0'; a++)
			if (*(accept + i) == *(s + a))
			{
				k += 1;
				break;
			}
	}

	k += 1;

	return (k);
}
