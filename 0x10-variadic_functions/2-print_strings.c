#include "variadic_functions.h"


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int c;
	char *st;

	va_list str;

	va_start(str, n);

	for (c = 0; c < n; c++)
	{
		st = va_arg(str, char *);
		if (st)
		{
			printf("%s", st);
		}
		else
		{
			printf("(nil)");
		}
		if (separator && c < n - 1)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');

	va_end(str);
}

