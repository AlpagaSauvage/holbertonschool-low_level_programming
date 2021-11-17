#include "lists.h"

/**
 * pop_listint - free list
 * @head: head of the node
 * Return: c
 */

int pop_listint(listint_t **head)
{
	listint_t *del;
	int c;

	if (head == NULL)
		return (0);
	del = *head;
	*head = (*head)->next;
	c = del->n;

	free(del);
	return (c);
}
