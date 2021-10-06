#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *positive_or_negative - positive or negative
 *Return: 0
 */

void positive_or_negative(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);

	else if (n == 0)
		printf("%d is zero\n", n);

	else
		printf("%d is negative\n", n);

}
