#include "dog.h"

/**
 * free_dog - frees instance of dog struct.
 * @d: pointer to structure dog.
  * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
