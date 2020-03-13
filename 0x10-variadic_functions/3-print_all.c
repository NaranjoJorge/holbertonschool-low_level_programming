#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * fm_char -
 * @ls:va_list
  * Return:
 */
void fm_char(va_list ls)
{
	char res;
	res = va_arg(ls, int);
	printf("%c", res);
}
/**
 * fm_int -
 * @ls:va_list
 * Return:
 */

void fm_int(va_list ls)
{
        int res;
        res = va_arg(ls, int);
        printf("%d", res);
}
/**
 * fm_float -
 * @ls:va_list
 * Return:
 */

void fm_float(va_list ls)
{
        float res;
        res = va_arg(ls, double);
        printf("%f", res);
}
/**
 * fm_string -
 * @ls:va_list
 * Return:
 */

void fm_string(va_list ls)
{
        char *res;
        res = va_arg(ls, char*);
	if (res == '\0')
		res = "(nil)";
        printf("%s", res);
}

/**
 * print_all - Variadic function that prints anything.
 * @format: const char * const
 * Return: Void.
 */

void print_all(const char * const format, ...)
{
	fm formats[] = {
		{"c", fm_char},
		{"i", fm_int},
		{"f", fm_float},
		{"s", fm_string},
		{NULL, NULL}
	};

	int i = 0;
	int j;
	va_list ls;
	char *espacio = "";
	va_start(ls, format);


	while (format && format[i])
	{
		j = 0;
		while (formats[j].z)
		{
			if (format[i] == *formats[j].z)
			{
				printf("%s", espacio);
				formats[j].f(ls);
				espacio = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");

	va_end(ls);
}
