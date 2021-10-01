#include <stdio.h>

/**
 *main - print comb3
 *Return: 0
 */
int main(void)
{
	int c = 0, b;

	while (c < 9)
	{
		b = c + 1;
		while (b <= 9)
		{
			putchar(c + '0');
			putchar(b + '0');
			if (c < 8 || b < 9)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		c++;
	}

	putchar('\n');
	return (0);
}
