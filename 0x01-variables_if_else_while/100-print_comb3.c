#include <stdio.h>

/**
 * main - prints 01...89 while the 2 digits are different.
 * Return: 0
 */

int main(void)
{
	int i = 48;

	int j = i + 1;

	for (; i < 58; i++)
	{
		for ( ; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 56 || j != 57)
			{
				putchar(',');
				putchar(' ');
			}

		}
	}
	putchar('\n');
	return (0);
}
