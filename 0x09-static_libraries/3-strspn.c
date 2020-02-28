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
	/* s = hello, world */
	int i, a;

	for (i = 0; s[i]; i++)
	{
		for (a = 0; accept[a]; a++)
		{
			if (s[i] == accept[a])
				break;
		}

		if (accept[a] == 0)
			break;

	}

	return (i);
}
