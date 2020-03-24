#include "lists.h"

/**
 * add_nodeint - Add node at the beggining of listint_t and
 * returns its adress.
 * @head: Double Pointer to listint_t.
 * @n: Addres of new node.
 * Return: Addres of new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (head == NULL)
	{
		*head = new;
		return (new);
	}

	new->next = *head;
	*head = new;

	return (new);
}
