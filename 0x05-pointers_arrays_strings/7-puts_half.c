#include "main.h"

/**
 *puts_half - half
 *@str: value
 */

void puts_half(char *str)
{
	int c;

	for (c = ((_strlen(str) + 1) / 2); c < _strlen(str); c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}

/**
 *_strlen - lenght
 *@s: value
 *Return: i
 */


int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
	}
	return (i);
}
