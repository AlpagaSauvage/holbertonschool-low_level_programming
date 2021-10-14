#include "main.h"

/**
 *_strncat - concatenates
 *@dest: value
 *@src: value bis
 *@n: value bbis
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c = 0;
	int d = 0;

	while (dest[c] != '\0')
	{
		c++;
	}

	while (src[d] && d < n)
	{
		dest[c] = src[d];
		c++;
		d++;
	}

	dest[c] = '\0';

	return (dest);
}
