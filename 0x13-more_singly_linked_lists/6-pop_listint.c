#include "lists.h"

/**
 * pop_listint - Deletes first node and returns its data.
 * @head:Double pointer to linked list listint_t.
 * Return: Old heads node data.
 */

int pop_listint(listint_t **head)
{
	listint_t *to_delete;
	int n_data;

	if (head == NULL)
		return (0);

	to_delete = *head;

	n_data = to_delete->n;

	*head = (*head)->next;

	free(to_delete);

	return (n_data);
}
