#include "lists.h"

/**
 * ------- Add node at the beggining of listint_t and
 * returns its adress.
 * @head: Double Pointer to listint_t.
 * @n: Addres of new node.
 * Return: Addres of new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current = head;
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
		new->next = head;
		return (new);
	}
	/*  */
	while (i < (idx - 1))
	{
		current = current->next;
		i++;
	}

	new->next = current->next;
	current->next = new;

	return (new);
}
