#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives.
 * @argv: array of pointers to program arguments. argv[0] being
 * the program name.
 * @argc: Number of arguments.
 * Return: 0.
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
