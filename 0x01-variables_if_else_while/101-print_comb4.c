#include <stdio.h>

/**
 * main - prints 012...789 while the 3 digits are different.
 * Return: 0
 */

int main(void)
{
	int i = 48;
	int j = i + 1;
	int k = j + 1;

	for (; i < 58; i++)
	{
		for ( ; j < 58; j++)
		{
			for (; k < 58; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55 || j != 56 || k != 57)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
