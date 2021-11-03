#include "function_pointers.h"

/**
 * array_iterator - array iterator
 * @array: array
 * @size: size
 * @action: action
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t c;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (c = 0; c < size; c++)
		{
			action(array[c]);
		}
	}

}
