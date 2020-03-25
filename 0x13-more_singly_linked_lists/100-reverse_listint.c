#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: Double pointer to head on linked list listint_t.
 * Return: Pointer to first node of reversed link.
 */

/*Returns: a pointer to the first node of the reversed list*/
/*You are not allowed to use malloc, free or arrays*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *current;

	if (head == NULL)
		return (0);

	if (head != NULL)
	{
		prev = (*head);
		(*head) = (*head)->next;
		current = *head;
		/* disconnecting 1st node from list*/
		prev->next = NULL;

		while (head != NULL)
		{
			(*head) = (*head)->next;
			current->next = prev;
			prev = current;
			current = *head;
		}
		*head = prev;
	}
	return (prev);
	/* codeforwin.org/2015/09/c-program-to-reverse-singly-linked-list.html*/
}
