#include "lists.h"

/**
 * sum_dlistint - sum of elemets of the list
 * @head: head
 * Return: c
 */

int sum_dlistint(dlistint_t *head)
{
	int c = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		c += head->n;
		head = head->next;
	}
	return (c);
}
