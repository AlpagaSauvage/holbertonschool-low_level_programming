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
	char *c;
	unsigned int b;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	c = malloc(size * nmemb);

	if (c == NULL)
	{
		return (NULL);
	}

	for (b = 0; b < nmemb * size; b++)
	{
		c[b] = 0;
	}

	return (c);
}
