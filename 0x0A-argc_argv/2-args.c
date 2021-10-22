#include <stdio.h>

/**
 * main - print arguments
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
