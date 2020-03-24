#include "lists.h"
/**
 * get_nodeint_at_index - Returns node at index.
 * @head: Linked list listint_t.
 * @index: Unsigned int.
 * Return: Node at index.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i < index)
	{
		head = head->next;
		i++;
	}

	if (head == NULL)
		return (NULL);

	return (head);
}
