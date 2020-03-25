#include "lists.h"

/**
 * -------  - frees linked list listint_t.
 * @head:listint_t pointer.
 * Return:void
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *current;

	prev = *head;
	*head = head->next;
	current = *head;

	/* disconnecting 1st node from list*/
	prev->next = NULL;
	*head = head->next;
	current->next = prev;
	/* what am I doing here?*/
	prev = current;
	current = *head;
	
	/* codeforwin.org/2015/09/c-program-to-reverse-singly-linked-list.html*/

}
