#include "dog.h"

/**
 * print_dog - Function that prints a struct dog.
 * @d: pointer to structure dog.
  * Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!d->name)
			printf("Name: (nil)");
		if (!d->owner)
			printf("Owner: (nil)");

		else
			printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}

}
