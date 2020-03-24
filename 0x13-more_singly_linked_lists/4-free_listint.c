#include "lists.h"

/**
 * free_listint - frees linked list listint_t.
 * @head:listint_t pointer.
 * Return:void
 */

void free_listint(listint_t *head)
{
	if (!head)
		return;

	free_listint(head->next);
	free(head);
}
