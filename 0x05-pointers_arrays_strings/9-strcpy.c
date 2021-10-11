#include "main.h"

/**
 * *_strcpy - copy
 *@dest: value
 *@src: value bis
 *Return: s
 */

char *_strcpy(char *dest, char *src)
{
	char *s = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
