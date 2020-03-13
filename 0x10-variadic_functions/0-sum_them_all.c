/* #include <stdarg.h>, included in library */

/**
 * sum_them_all-Sum of parameters.
 * @n: const unsigned int n.
 * Return: Sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ls;

	va_start(ls, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(n, unsigned int);
	}

	va_end(ls);

	return (sum);
}
