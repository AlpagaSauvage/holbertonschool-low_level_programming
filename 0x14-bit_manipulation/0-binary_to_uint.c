#include "main.h"

/**
 *_strlen - lenght
 *@s: value
 *Return: i
 */


int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
	}
	return (i);
}

/**
 * binary_to_uint - convert binary to decimal
 * @b: binary number
 * Return: in decimal
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int exposant;
	int i;
	unsigned int result = 0, c = 1;

	if (b == NULL)
		return (0);

	exposant = _strlen(b) - 1;

	for (i = exposant; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			result += c;
		c *= 2;
	}
	return (result);
}
