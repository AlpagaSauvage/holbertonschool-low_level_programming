#include "main.h"

/**
 * cap_string - cap string
 * @str: value
 * Return: str
 */

char *cap_string(char *str)
{
	char sep[] = { 32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 42, '{', '}', '\0' };
	int c, d;

	if (str[0] > 97 && str[0] < 122)
	{
		str[0] -= 32;
	}

	for (c = 0; str[c] != '\0'; c++)
	{
		for (d = 0; sep[d] != '\0'; d++)
		{
			if (str[c - 1] == sep[d] && (str[c] > 95 && str[c] < 122))
			{
				str[c] -= 32;
			}
		}
	}
	return (str);
}
