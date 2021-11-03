#include "function_pointers.h"

/**
 * int_index - search for integrer
 * @array: array
 * @size: size of array
 * @cmp: cmp
 * Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (c = 0; c < size; c++)
	{
		if (cmp(array[c]) != 0)
		{
			return (c);
		}
	}
	return (-1);
}
