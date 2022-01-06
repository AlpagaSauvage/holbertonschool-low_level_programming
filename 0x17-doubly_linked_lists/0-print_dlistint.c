#include "lists.h"

/**
 * print_dlistint - print numbers of nodes
 * @h: value
 * Return: size of the node
 */

size_t print_dlistint(const dlistint_t *h)
{
	int number_of_nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		number_of_nodes++;
		h = h->next;
	}

	return (number_of_nodes);
}
