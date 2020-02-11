/*Should header file be executable? */

#include "holberton.h"

/**
 * main - prints 'holberton' followed by a new line.
 * Return: 0
 */

int main(void)
{
	char a[] = {"Holberton"};
	int i = 0;
	char b;

	while (a[i] != '\0')
	{
		b = a[i];
		_putchar(b);
		++i;
	}
	_putchar('\n');
	return (0);
}
