#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers- Prints numbers.
 * @separator: pointer to first argument.
 * @n: const unsigned int.
 * Return: Void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, number;
	va_list ls;

	va_start(ls, n);


	for (i = 0; i < n; i++)
	{
		number = va_arg(ls, unsigned int);
		if (separator)
		{
			if (i < (n - 1))
				printf("%d%s", number, separator);
			else
				printf("%d", number);
		}
		else
			printf("%d", number);
	}
	printf("\n");

	va_end(ls);
}
