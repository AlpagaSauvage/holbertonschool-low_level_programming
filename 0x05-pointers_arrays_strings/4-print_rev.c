#include "main.h"
/**
 *print_rev - preint rev
 *@s: value
 */

void print_rev(char *s)
{
	int c = _strlen(s);

	for (c = _strlen(s) - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}


#include "main.h"
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
