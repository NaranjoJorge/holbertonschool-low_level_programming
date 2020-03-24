#include "lists.h"

/**
 * listint_len - Returns number of elements in listint_t
 * @h: Pointer to listint_t
 * Return: number of nodes in listint_t
 */

size_t listint_len(const listint_t *h)
{
	unsigned long int i = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
