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
