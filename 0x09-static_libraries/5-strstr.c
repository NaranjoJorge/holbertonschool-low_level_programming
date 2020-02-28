#include "holberton.h"

/**
 * _strstr - Returns a
 * @haystack: char pointer
 * @needle: char pointer
 * Return: a
 */

char *_strstr(char *haystack, char *needle)
{
	int i, a;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{}

	for (a = 0; *(needle + a) != '\0'; a++, i++)
	{
		*(haystack + i) = *(needle + a);
	}

	return(haystack);
}

/* I had this function empty so I just copied what the char *_strcat() does */
