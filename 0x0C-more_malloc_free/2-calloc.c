#include "main.h"
#include <stdlib.h>
#include <string.h>

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

	c = malloc(sizeof(size) * nmemb);

	if (c == NULL)
	{
		return (NULL);
	}

	return (c);
}
