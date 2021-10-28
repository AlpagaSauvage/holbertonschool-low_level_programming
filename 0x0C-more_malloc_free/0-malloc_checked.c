#include "main.h"
#include <stdlib.h>



void *malloc_checked(unsigned int b)
{
	int *c;

	c = malloc(sizeof(int) * b);

	if (c == NULL)
	{
		exit(98);
	}
	
}