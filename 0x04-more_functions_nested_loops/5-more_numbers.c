#include "main.h"

/**
 *more_numbers - 0 to 14
 *Return: 0
 */

void more_numbers(void)
{
	int i = 0;
	int p = 0;

	for (p = 0; p <= 9; p++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
			if (i == 14)
			{
				_putchar('\n');
			}
		}
	}
}
