#include "main.h"

/**
 *_strncpy - copy
 *@dest: value
 *@src: bis
 *@n: bis bis
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	for (c = 0; c < n && src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}
	while (c < n)
	{
		dest[c++] = '\0';
	}
	return (dest);
}
