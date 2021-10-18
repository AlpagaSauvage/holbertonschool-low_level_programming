#include "main.h"

/**
 * _strchr - search
 * @s: pointer
 * @c: character to find
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}

		return (0);
}
