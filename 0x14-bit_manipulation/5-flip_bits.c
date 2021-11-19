#include "main.h"

/**
 * flip_bits - flips bits
 * @n: value
 * @m: value
 * Return: result
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, result = 0;

	for (i = 0; i < 64; i++)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			result += 1;
	}

	return (result);
}
