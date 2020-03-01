#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints minimum number of coins for an amount of money
 * input as argument in the command line.
 * @argv: array of pointers to program arguments. In this case the
 * array only has 2 indexes. 0 for the program name, 1 for the
 * amount of money.
 * @argc: Number of arguments. In this case 2.
 * Return: 0 if succes.
 */

int main(int argc, char **argv)
{
	int counter;
	int cents = atoi(argv[1]);

	if (argc == 2)
	{
		while (cents / 25)
		{
			counter += 1;
			cents = cents - 25;
		}
		while (cents / 10)
		{
			counter += 1;
			cents = cents - 10;
		}
		while (cents / 5)
		{
			counter += 1;
			cents = cents - 5;
		}
		while (cents / 2)
		{
			counter += 1;
			cents = cents - 2;
		}
		while (cents / 1)
		{
			counter += 1;
			cents = cents - 1;
		}
	} else
	{
		return (0);
	}
	printf("%d\n", counter);
	return (0);
}
