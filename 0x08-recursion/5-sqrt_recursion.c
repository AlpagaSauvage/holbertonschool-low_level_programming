#include "main.h"

/**
 * _sqrt_recursion - square root
 * @n: value
 * Return: n
 */

int _sqrt_recursion(int n)
{
	return (var(1, n));
}

/**
 * var - variables
 * @c: value
 * @n: value
 * Return: -1
 */

int var(int c, int n)
{
	if (n / c != c && c <= n)
	{
		return (var(c + 1, n));
	}

	if (n % c != 0)
	{
		return (-1);
	}

	if (n / c == c)
	{
		return (c);
	}
	return (-1);
}
