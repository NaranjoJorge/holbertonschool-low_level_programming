#include "lists.h"
/**
 * get_nodeint_at_index -  
 * @head:Dueble pointer to head
 * @str:char *
 * Return: list_t
 */
get_nodeint_at_index
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i < (index - 1))
	{
		head = head->next;
		i++;
	}
	return (head);
}
