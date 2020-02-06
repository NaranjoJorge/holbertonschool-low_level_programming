#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints numbers from 0 to 9
 * Return: 0
 */

int main(void)
{
	int number = 0;

	while (number < 10)

	{
		printf("%d", number);
		number++;
	}
	putchar('\n');
	return (0);
}
