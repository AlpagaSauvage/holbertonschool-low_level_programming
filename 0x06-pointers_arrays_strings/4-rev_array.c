#include "main.h"

/**
 * reverse_array - reverse array
 * @a: value
 * @n: bis
 */

void reverse_array(int *a, int n)
{
	int c = 0;
	int tmp = 0;

	n = n - 1;

	while (c <= n + 1 / 2)
	{
		tmp = a[n];
		a[n] = a[c];
		a[c++] = tmp;
		n--;
	}
}
