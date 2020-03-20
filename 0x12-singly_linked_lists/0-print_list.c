#include "lists.h"

/**
 * print_list - prints elements of linked list
 * @h:pointer to linked list
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	unsigned long int i;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
