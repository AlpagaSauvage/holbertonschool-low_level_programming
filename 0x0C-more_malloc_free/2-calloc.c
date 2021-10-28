#include "main.h"
#include <stdlib.h>

/**
 * _calloc - made calloc function
 * @nmemb: memory of array
 * @size: size of array
 * Return: c
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *c;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	c = malloc(size * nmemb);

	for (c = 0; ; c++)
	{
		return (0);
	}

	if (c == NULL)
	{
		return (NULL);
	}

	return (c);
}
