#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stddef.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void fm_char(va_list ls);
void fm_int(va_list ls);
void fm_float(va_list ls);
void fm_string(va_list ls);

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct formats
{
	char *z;
	void (*f)(va_list);
} fm;

#endif /* _VARIADIC_FUNCTIONS_H_ */
