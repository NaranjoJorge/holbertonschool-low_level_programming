#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc -Reallocates a memory block using malloc and free.
 * @ptr: pointer to previously allocated memory.
 * @old_size: size, in bytes, of the allocated space for ptr.
 * @new_size: size, in bytes of new memory block.
 * Return: pointer to new memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *old_ptr = ptr;
	char *new_ptr;

	/*new_ptr = malloc(new_size);*/

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		new_ptr = malloc(new_size);

	if (new_size == 0 && ptr != NULL)
	{
		free (old_ptr);
		return (NULL);
	}

	return (new_ptr);
}
