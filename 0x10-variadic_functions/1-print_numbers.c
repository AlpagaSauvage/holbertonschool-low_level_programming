#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: separator
 * @n: n
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int c;

	va_list num;

	va_start(num, n);

	for (c = 0; c < n; c++)
	{
		printf("%d", va_arg(num, int));
		if (separator != NULL && c < n - 1)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');

	va_end(num);
}
