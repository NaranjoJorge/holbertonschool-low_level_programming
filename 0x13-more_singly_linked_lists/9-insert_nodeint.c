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
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (head == NULL)
	{
		*head = new;
		return (new);
	}

	while (i < (idx - 2))
	{
		head = head->next;
		i++;
	}

	head->next = new;
	head = head->next;
	/* *head = new;*/

	/* to be continued*/

	return (new);
}
