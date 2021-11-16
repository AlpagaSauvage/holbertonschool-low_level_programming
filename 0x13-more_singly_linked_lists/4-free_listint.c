#include "lists.h"

/**
 * free_listint - free listint
 * @head: head of the node
 * Return: none
 */

void free_listint(listint_t *head)
{
	listint_t *tmp

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
