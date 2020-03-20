#include "lists.h"

/**
 * add_node_end - Adds new node at the end of linked list.
 * @head:Dueble pointer to head
 * @str:char *
 * Return: list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new, *temp;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	new->len = i;
	new->next = NULL;

	temp = *head;

	if (temp == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;

	return (new);
}
