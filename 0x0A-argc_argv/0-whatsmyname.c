#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints name of program.
 * @argv: array of pointers to program arguments. argv[0] being
 * the program name.
 * @argc: Number of arguments.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
