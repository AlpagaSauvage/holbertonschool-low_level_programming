#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate string
 * @str: string to duplicate
 * Return: c
 */

char *_strdup(char *str)
{
	int size;
	char *c;

	if (str == NULL)
	{
		return (NULL);
	}
	size = _strlen(str);
	c = (char *)malloc(sizeof(char) + 1 * size);

	if (c == NULL)
	{
		return (NULL);
	}
	for (size = 0; size < _strlen(str); size++)
	{
		c[size] = str[size];
	}
	return (c);
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
