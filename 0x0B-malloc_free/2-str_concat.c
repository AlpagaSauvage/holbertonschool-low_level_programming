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
	int b, d, i;

	if (s1 == NULL)
		b = 0;
	else
		b = _strlen(s1);

	if (s2 == NULL)
		d = 0;
	else
		d = _strlen(s2);


	c = malloc(sizeof(char) * (_strlen(s1) + _strlen(s1)) + 1);

	for (i = 0; i < b; i++)
		*(c + i) = *(s1 + i);
	for (i = 0; i < d; i++)
		*(c + b + i) = *(s2 + i);
	*(c + b + d) = '\0';
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
