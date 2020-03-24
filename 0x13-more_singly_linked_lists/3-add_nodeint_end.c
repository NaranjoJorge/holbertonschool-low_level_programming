#include "lists.h"

/**
 * add_nodeint_end -Adds node to the end of listint_t.
 * @head:Double pointer to listint_t.
 * @n:Address.
 * Return:Address of new node or null if failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last, *temp;

	last = malloc(sizeof(listint_t));

	if (last == NULL)
		return (NULL);

	last->n = n;
	last->next = NULL;

	temp = *head;

	if (temp == NULL)
	{
		*head = last;
		return (last);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = last;

	return (last);
}
