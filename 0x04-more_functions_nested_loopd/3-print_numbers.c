#include "main.h"

/**
 *print_numbers - print numbers
 *Return: 0
 */

void print_numbers(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
		if (i == 9)
		{
			_putchar('\n');
		}
	}
}
