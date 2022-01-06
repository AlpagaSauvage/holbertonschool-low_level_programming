#include "lists.h"

/**
 * free_dlistint - free list
 * @head: head of node
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
