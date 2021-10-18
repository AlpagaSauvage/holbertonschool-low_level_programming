#include "main.h"

/**
 * _strchr - search
 * @s: pointer
 * @c: character to find
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	char *p = s;
	int i = 0;

	while (*s != c)
	{
		++s;
		++i;
	}
	if (*s == c)
	{
		return (p + i);
	}
	else
	{
		return (0);
	}
}
