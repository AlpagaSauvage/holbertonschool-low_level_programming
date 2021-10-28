#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - check if malloc work
 * @b: size of malloc
 * Return: c
 */

void *malloc_checked(unsigned int b)
{
	int *c;

	c = malloc(b);

	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
