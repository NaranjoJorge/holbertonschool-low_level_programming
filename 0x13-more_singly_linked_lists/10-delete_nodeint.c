#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at position index.
 * @head:listint_t pointer.
 * @index: Unsigned int; node to be deleted.
 * Return: 1 if success, -1 if failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;
	listint_t *next;

	if (head == NULL)
		return (-1);

	/* */
	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp != NULL && (i < (index - 1)))
	{
		temp = temp->next;
		i++;
	}

	/* || temp->next == NULL */
	if (temp == NULL)
		return (-1);

	/* */
	next = temp->next->next;
	/* temp */
	free(temp->next);
	temp->next = next;
	return (1);
}
