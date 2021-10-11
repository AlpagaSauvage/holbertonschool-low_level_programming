#include "main.h"
#include <stdlib.h>

/**
 *swap_int - swap int
 *@a: value
 *@b: value bis
 */

void swap_int(int *a, int *b)
{
	int *c;

	c = (int *) malloc(sizeof(c));

	*c = *a;

	*a = *b;

	*b = *c;
}
