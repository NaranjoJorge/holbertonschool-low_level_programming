#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints lower case alphabet, excluding q & e
 * Return: 0
 */

int main(void)
{
	int abc = 'a';

	while (abc <= 'z')

	{
		if (abc != 'e' && abc != 'q')
			
			putchar(abc);
		abc++;
	}
	putchar('\n');
	return (0);
}
