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

	separator = &va_arg(ls, unsigned int);

	for (i = 1; i < n; i++)
	{
		number = va_arg(ls, unsigned int);
		if (separator == NULL)
			printf("%d ", number);
		else
			printf("%d%s ", *separator, number);
	}
	va_end(ls);
}
