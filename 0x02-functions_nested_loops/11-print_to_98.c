#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - Prints natural numbers from n to 98.
 * @n: Integer
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d", n);
				printf(",");
				printf(" ");
				n++;
			}
		}

	} else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d", n);
			printf(",");
			printf(" ");
			n--;
		}
		printf("%d", n);
		printf("\n");
	}
}
