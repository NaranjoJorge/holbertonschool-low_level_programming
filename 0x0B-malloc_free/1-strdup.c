#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -Allocates space in memory which contains a copy  * of str.
 * @str: string.
 * Return: Pointer to duplicated string.
 */

char *_strdup(char *str)
{
	/*char *s */
	char s[] = str;

	/* casting?* char *s = char*malloc */
	*s = malloc(sizeof(str));

	if (s == NULL)
		return (NULL);

	return (s);
	free(s);
}
