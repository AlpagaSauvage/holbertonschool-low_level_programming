#include "main.h"

void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp = 0;

	n = n - 1;

	while (i <= n + 1 / 2)
	{
		tmp = a[n];
		a[n] = a[i];
		a[i++] = tmp;
		n--;
	}
}
