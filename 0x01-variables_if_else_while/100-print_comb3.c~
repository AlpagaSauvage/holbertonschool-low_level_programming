#include <stdio.h>

/**
 *main - print comb3
 *Return: 0
 */
int main(void)
{
	int n1 = 0, n2;

	while (n1 < 9)
	{
		n2 = n1 + 1;
		while (n2 <= 9)
		{
			putchar(n1 + '0'); /* To get the ASCII value of the number */
			putchar(n2 + '0');
			if (n1 < 8 || n2 < 9)
			{
				putchar(',');
				putchar(' ');
			}
			n2++;
		}
		n1++;
	}

	putchar('\n');
	return (0);
}
