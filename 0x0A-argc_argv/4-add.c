#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argv: array of pointers to program arguments. argv[0] being
 * the program name.
 * @argc: Number of arguments.
 * Return: 0 if succes, 1 if fail.
 */

int main(int argc, char **argv)
{
	int i;
	int sum = 0;

	if (argc < 3)
	{
		printf("%d\n", sum);
		return (0);
	}


	for (i = 1; i < argc; i++)
	{
		if (**(argv + i) < 48 || **(argv + i) > 57)
		{
			printf("Error\n");
		        return (0);
		} else {
			sum += atoi(argv[i]);
		}
	}

	printf("%d\n", sum);

	return (0);
}
