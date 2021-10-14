#include "main.h"

/**
 *_strcat - concatenates
 *@dest: value
 *@src: value bis
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int c = 0;
	int d = 0;

	while (dest[c] != '\0')
	{
		c++;
	}

	while (src[d] != '\0')
	{
		dest[c + d] = src[d];
		d++;
	}

	dest[c + d] = '\0';

	return (dest);
}
