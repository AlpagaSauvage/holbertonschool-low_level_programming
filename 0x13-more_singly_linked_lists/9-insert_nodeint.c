#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at index
 * @head: head of the node
 * @idx: index
 * @n: value
 * Return: new
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int c = 0;
	listint_t *tmp;
	listint_t *new;
	listint_t *previous;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (head == NULL)
		return (NULL);

	tmp = *head;

	if (idx == 0)
	{
		new->next = (*head);
		*head = new;
		return (new);
	}

	while (tmp != NULL && c < idx)
	{
		previous = tmp;
		tmp = tmp->next;
		c++;
	}

	if (c < idx)
		return (NULL);

	previous->next = new;
	new->next = tmp;

	return (new);
}
