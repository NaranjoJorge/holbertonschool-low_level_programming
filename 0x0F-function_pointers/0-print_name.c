#include "function_pointers.h"
/**
 * print_name -Prints string name through function to pointer.
 * @name: string
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
