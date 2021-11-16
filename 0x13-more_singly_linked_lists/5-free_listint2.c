#include "lists.h"

/**
 * free_listint2 - free list
 * @head: head of node
 * Return: none in void
 */

void free_listint2(listint_t **head)
{
	listint_t *old;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		old = (*head);
		(*head) = (*head)->next;
		free(old);
	}
	head = NULL;
}
