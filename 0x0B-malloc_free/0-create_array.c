#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array
 * @size: size
 * @c: char
 * Return: s
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc((size) * sizeof(char));
	if (s != 0)
	{
		i = 0;
		while (i < size)
		{
			s[i] = c;
			i++;
		}
	s[i] = '\0';
	return (s);
	}
	return (NULL);
}
