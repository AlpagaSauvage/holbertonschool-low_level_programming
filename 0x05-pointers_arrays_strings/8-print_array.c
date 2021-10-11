#include "main.h"
#include <stdio.h>

/**
 *print_array - print array
 *@a: value
 *@n: value bis
 */

void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		if (c == 0)
		{
		}
		else
			printf(", ");
		printf("%d", a[c]);
	}
	printf("\n");
}
