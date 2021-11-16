#include "lists.h"

/**
 * add_nodeint - add node at the biginning
 * @head: head of the node
 * @n: value
 * Return: head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
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
