#include "holberton.h"

/**
 * _strlen - Returns string length.
 * @s: Pointer to string
 *
 * Return: String length.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{}

	return (i);

}

/*If checker not pass, add counter variable in loop that holds +=1 */
