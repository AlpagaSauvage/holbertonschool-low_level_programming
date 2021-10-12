#include "main.h"

/**
 *_atoi - convert
 *@s: value
 *Return: num
 */

int _atoi(char *s)
{
	int c = 0, sign = 1;
	unsigned int num = 0;

	while ((s[c] < '0' || s[c] > '9') && s[c] != '\0')
	{
		if (s[c] == '-')
		{
			sign *= (-1);
		}
		c++;
	}
	while (s[c] <= '9' && s[c] >= '0')
	{
		num = (num * 10) + s[c] - 48;
		c++;
	}
	return (num * sign);
}
