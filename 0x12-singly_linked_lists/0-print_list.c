#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h:pointer to linked list
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	unsigned long int i;

	if (!h)
	{
		printf("[0] (nil)");
	}

	for(h != NULL)
	{
		h = h->next;
		printf("[%i] %s\n", h->len, h->str);
		i++;
	}

	return (i);
}
