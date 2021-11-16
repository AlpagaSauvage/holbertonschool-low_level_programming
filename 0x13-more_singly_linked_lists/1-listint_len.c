#include "lists.h"

/**
 * listint_len - print the numbers of elements
 * @h: value
 *  Return: numer of nodes
 */

size_t listint_len(const listint_t *h)
{
	int number_of_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		number_of_nodes++;
	}

	return (number_of_nodes);
}
