#include "lists.h"

/**
 * sum_listint - sum of the nodes
 * @head: head of the nodes
 *  Return: c
 */

int sum_listint(listint_t *head)
{
	int c = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		c += head->n;
		head = head->next;
	}
	return (c);
}
