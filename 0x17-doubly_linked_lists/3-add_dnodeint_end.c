#include "lists.h"

/**
 * add_dnodeint_end - add node at the end
 * @head: head of the node
 * @n: value of the node
 * Return: new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *temp = *head;

	dlistint_t *new = (malloc(sizeof(dlistint_t)));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if ((*head) == NULL)
	{
		new->prev = NULL;
		(*head) = new;
		return (new);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->prev = temp;
	return (new);
}
