#include "lists.h"

/**
 * free_listint - free listint
 * @head: head of the node
 * Return: none
 */

void free_listint(listint_t *head)
{
	listint_t *old;

	while (head != NULL)
	{
		old = head;
		head = head->next;
		free(old);
	}
}
