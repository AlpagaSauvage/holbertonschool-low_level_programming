#include "main.h"

void rev_string(char *s);

/**
 *rev_string - reverse string
 *@s: value
 */

void rev_string(char *s)
{

	int length, start, temporary;

	for (start = 0, length = _strlen(s) - 1; length > start; start++, length--)
	{
		temporary = s[start];
		s[start] = s[length];
		s[length] = temporary;
	}
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
