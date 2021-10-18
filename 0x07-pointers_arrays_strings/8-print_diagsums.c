#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum diag
 * @a: string
 * @size: size
 */

void print_diagsums(int *a, int size)
{
	int i, j, result = 0, result2 = 0;

	for (i = 0; i < size; i++)
	{
		result = result + a[i + i * size];
	}
	printf("%d, ", result);

	for (i = size - 1; i >= 0; i--, j++)
	{

		result2 = result2 + a[i * size + j];
	}
	printf("%d\n", result2);
}
