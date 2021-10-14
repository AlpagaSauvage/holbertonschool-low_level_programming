#include "main.h"

/**
 * string_toupper - replace lowercase
 * @str: value
 * Return: str
 */

char *string_toupper(char *str)
{
	int c = 0;

	while (str[c] >= 95 && str[c] <= 122)
	{
		str[c] = str[c] - 32;
		c++;
	}
	return (str);
}
