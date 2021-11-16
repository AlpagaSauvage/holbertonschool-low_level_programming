#include "lists.h"


void free_listint2(listint_t **head)
{
	listint_t *old;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		old = *head;
		(*head) = (*head)->next;
		free(old);
	}
	head = NULL;
}
