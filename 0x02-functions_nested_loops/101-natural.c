#include <stdio.h>
/**
 *main - work
 *Return: 0
 */

int main(void)
{
	int i = 1;
	int counter = 0;

	while (i < 1024)
	{
		if (i % 5 == 0 || i % 3 == 0)
			counter += i;
		i++;
	}
	printf("%d\n", counter);
	return (0);
}
