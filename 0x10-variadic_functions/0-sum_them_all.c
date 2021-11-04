#include "variadic_functions.h"

/**
 * sum_them_all - sum of all
 * @n: n
 * Return: s
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int c;
	int s = 0;

	va_list(arg);

	if (n == 0)
	{
		return (0);
	}
	va_start(arg, n);

	for (c = 0; c < n; c++)
	{
		s += va_arg(arg, int);
	}
	va_end(arg);
	return (s);
}
