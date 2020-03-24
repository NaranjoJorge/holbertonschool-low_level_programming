#include "lists.h"

/**
 * pop_len - Deletes first node and returns its data.
 * @h:Double pointer to linked list listint_t.
 * Return: Heads node data.
 */

int pop_listint(listint_t **head)
{
	int n;

	if (*head == NULL)
		return (NULL);

	n = head->n;
	/*retornar dirección también*/
	 head->next;

	listint_t *temp = *head;
	*head = head->next;

	/* how to delete temp? */
}
