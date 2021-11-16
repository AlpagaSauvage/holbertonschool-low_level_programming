#include "lists.h"

/**
 * add_nodeint_end - add node at the end
 * @head: head of the node
 * @n: value
 * Return: new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *old;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		old = *head;
		while (old->next != NULL)
			old = old->next;
		old->next = new;
	}

	return (new);
}

/**
* _strlen - check the length of the string
* Return: length of the string
* @s: string
*/

int _strlen(const char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0'; i++)
	{
	}

	return (i);
}
