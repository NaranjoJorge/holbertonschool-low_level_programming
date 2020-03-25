#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts new node at idx.
 * @head: Double Pointer to listint_t.
 * @idx: Index where node should be added.
 * @n: Unsigned int, element of new node.
 * Return: Addres of new node or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current = *head;
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (head == NULL)
	{
		return (new);
	}

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (i < (idx - 1))
	{
		current = current->next;
		i++;
	}

	new->next = current->next;
	current->next = new;

	return (new);
}
