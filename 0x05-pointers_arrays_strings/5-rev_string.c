#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string.
 * @s: char *s.
 * Return: void.
 */

void rev_string(char *s)
{
	int i, a;
	char z;

	for (i = 0; *(s + i) != '\0'; i++)
	{}

	for (a = 0, i--; a < i; a++, i--)
	{

		z  = *(s + a);
		*(s + a) = *(s + i);
		*(s + i) = z;
	}
}
