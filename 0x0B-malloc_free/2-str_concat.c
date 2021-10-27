#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates 2 string
 * @s1: string 1
 * @s2: string2
 * Return: c
 */

char *str_concat(char *s1, char *s2)
{
	char *c;
	int a = 0, b = 0;

	if (s1 == NULL && s2 == NULL )
	{
		return (NULL);
	}

	c = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2)) + 2);

	while (s1[a] != '\0')
	{
		c[a] = c[b];
		a++;
	}
	while (s2[b] != '\0')
	{
		c[a + b] = s2[b];
		b++;
	}
	c[a + b] = '\0';
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
