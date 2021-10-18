#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

    if ((s = '\0') || (accept = '\0'))
	{
        return i;
	}
    while (*s && _strchr( accept,*s++))
    {
        i++;
    }
    return i;
}


char *_strchr(char *s, char c)
{
	char *p = s;
	int i = 0;

	while (*s != c)
	{
		++s;
		++i;
	}
	if (*s == c)
	{
		return (p + i);
	}
	else
	{
		return (0);
	}
}
