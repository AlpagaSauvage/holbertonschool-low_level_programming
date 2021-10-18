#include "main.h"

/**
 * _memset - memory
 * @s: pointer
 * @b: value
 * @n: int
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *c = s;

	while (n--)
	{
		*c++ = (char)b;
	}
	return (s);
}
