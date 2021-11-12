#include "lists.h"

/**
 * print_list - print elements of a list
 * @h: value
 * Return: elements
 */

size_t print_list(const list_t *h)
{
	size_t element = 0;
	const list_t *tmp_list;
	char *str;
	unsigned int len;

	if (h != NULL)
	{
		tmp_list = h;
		while (tmp_list != NULL)
		{
			str = tmp_list->str;
			len = tmp_list->len;

			if (str == NULL)
			{
				str = "(nil)";
				len = 0;
			}
			element++;
			printf("[%u] %s\n", len, str);
			tmp_list = tmp_list->next;
		}
	}

	return (element);
}
