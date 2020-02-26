#include "holberton.h"

/**
 * _strlen_recursion - Length of string
 * @s: pointer to char
 * Return: void.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (_strlen_recursion(++s) + 1);
	return (0);
}
