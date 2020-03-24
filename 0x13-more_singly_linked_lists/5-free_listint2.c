#include "lists.h"

/**
 * free_listint2 - Frees linked list listint_t.
 * @head:Double pointer to listint_t.
 * Return:void.
 */

void free_listint2(listint_t **head)
{
	if (head)
	{
		if (*head)
		{
			free_listint2(&(*head)->next);
		}
		free(*head);
		*head = NULL;
	}
}
