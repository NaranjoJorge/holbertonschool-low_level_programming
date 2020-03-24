#include "lists.h"

/**
 * sum_listint -Return sum of elemnt n of all nodes in listint_t.
 * @head: Pointer to listint.
 * Return: Number of nodes in listint_t.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	/*printf("sum = %i", sum);*/
	return (sum);
}
