#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings- Prints string.
 * @separator: pointer to first argument.
 * @n: const unsigned int.
 * Return: Void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list ls;

	va_start(ls, n);


	for (i = 0; i < n; i++)
	{
		string = va_arg(ls, char*);

		if (separator == NULL)
		{
			break;
		}
		if (separator)
		{
			if (string == NULL)
				printf("(nil)");
			if (i < (n - 1))
				printf("%s%s", string, separator);
			else
				printf("%s", string);
		}
		else
			printf("%s", string);
	}
	printf("\n");

	va_end(ls);
}
