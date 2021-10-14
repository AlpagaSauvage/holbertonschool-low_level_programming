#include "main.h"

/**
 *_strcmp - compare
 *@s1: value
 *@s2: bis
 *Return: s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
	int c = 0;

	while (s1[c] == s2[c] && s1[c] && s2[c])
	{
		c++;
	}
	return (s1[c] - s2[c]);
}
