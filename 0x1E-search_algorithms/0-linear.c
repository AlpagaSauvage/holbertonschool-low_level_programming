#include "search_algos.h"

/**
* linear_search - Search algo in linear time complexity.
*
* @array: The array to search in
* @size: The size of the array
* @value: The value to find
*
* Return: The index of the founded value, -1 if any issues
*/
int linear_search(int *array, size_t size, int value)
{
	size_t c;

	if (!array)
		return (-1);
	for (c = 0; c < size; c++)
	{
		printf("Value checked array[%ld] = [%d]\n", c, array[c]);
		if (value == array[c])
			return (c);
	}
	return (-1);
}
