#include "lists.h"

/**
 * get_nodeint_at_index - return the nth of node
 * @head: head of the node
 * @index: index of the node
 * Return: head
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;

	if (head == NULL)
		return (NULL);

	while (head && c != index)
	{
		head = head->next;
		c++;
	}

	return (head);
}
