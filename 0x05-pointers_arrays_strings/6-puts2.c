#include "main.h"
/**
 *puts2 - print
 *@str: value
 */

void puts2(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
		if (str[c] != '\0')
		{
			c++;
		}
	}
	_putchar('\n');
}
