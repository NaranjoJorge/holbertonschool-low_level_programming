#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat -Concatenates 2 strings.
 * @s1: string where s1 & s2 will be concatenate.
 * @s2: string.
 * Return: Pointer to concatenated string.
 */

char *argstostr(int ac, char **av)
{
	char *a;
	int asize;
	int i;

	if (ac == 0)
		return (NULL);

	if (av == NULL)
		return (NULL);

	asize = (((ac - 1) * 2) - 1);
	a = malloc(sizeof(char) * asize);

	for (i = 0; i <= asize; i++)
	{
		if (i % 2 == 0)
			a[i] = '\n';
		else
			a[i] = *av[i];
	}
	return(a);
}
