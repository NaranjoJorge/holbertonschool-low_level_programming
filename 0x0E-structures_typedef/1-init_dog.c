#include "dog.h"

/**
 * init_dog - Initializes a structure.
 * @d: pointer to structure dog.
 * @name: char *
 * @age: float
 * @owner: char *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
