#include "main.h"
#include <stdlib.h>

/**
 * array_range - array of integrer
 * @min: minimum
 * @max: maximum
 * Return: c
 */

int *array_range(int min, int max)
{
	int size, i;
	int *c;

	if (min > max)
	{
		return (NULL);
	}

	for (size = 0; size < max - min; size++)
	{
	}

	c = malloc(sizeof(int) * (size + 1));

	if (c == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size + 1; i++, min++)
	{
		c[i] = min;
	}

	return (c);
}
