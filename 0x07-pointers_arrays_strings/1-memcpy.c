#include "main.h"

/**
 * _memcpy - copy
 * @dest: destination
 * @src: source
 * @n: value
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *csrc = (char *)src;
	char *cdest = (char *)dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		cdest[i] = csrc[i];
	}
	return (dest);
}
