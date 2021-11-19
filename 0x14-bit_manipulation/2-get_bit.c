#include "main.h"

/**
 * get_bit - get bit of numbers
 * @n: value
 * @index: index
 * Return: n
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > n)
		return (-1);

	n = n >> index;
	n = n & 1;

	return (n);
}
