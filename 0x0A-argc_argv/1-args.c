#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints # of arguments passed to the program.
 * @argv: array of pointers to program arguments. argv[0] being
 * the program name.
 * @argc: Number of arguments.
 * Return: 0.
 */

int main(int argc, char **argv)
{
	int i;
	int counter = 0;
	(void)**argv;

	if (argc == 1)
		printf("%d\n", counter);
	else
	{

		for (i = 1; i < argc; i++)
		{
			counter += 1;
		}

		printf("%d\n", counter);
	}

	return (0);
}
