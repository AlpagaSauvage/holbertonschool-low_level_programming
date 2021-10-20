#include "main.h"

/**
 * factorial - foctorial
 * @n: value
 * Return: n factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
