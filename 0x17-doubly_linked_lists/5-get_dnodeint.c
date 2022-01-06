#include "lists.h"


/**
 * dlistint_len - print numbers of elements
 * @h: value
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int numbers_of_nodes = 0;

	while (h != NULL)
	{
		numbers_of_nodes++;
		h = h->next;
	}
	return (numbers_of_nodes);
}

/**
 * get_dnodeint_at_index - index for node
 * @head: head
 * @index: index
 * Return: head
 */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c = 0;

	if (dlistint_len(head) < index)
	{
		return (NULL);
	}

	while (c != index)
	{
		head = head->next;
		c++;
	}
	return (head);
}
