#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive arguments
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int i;

		for (i = 1; i < argc; i++)
		{
			int j = 0;
			int r = r + atoi(argv[i]);

			while (argv[i][j] != '\0')
			{
				if (argv[i][j] < 48 || argv[i][j] > 57)
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			if (i + 1 == argc)
			{
				printf("%d\n", r);
			}
		}
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
