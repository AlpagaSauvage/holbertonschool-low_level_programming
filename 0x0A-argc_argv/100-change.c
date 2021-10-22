#include <stdio.h>
#include <stdlib.h>

/**
 * main - print minimum number use
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int montant;
	int piece;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	montant = atoi(argv[1]);
	piece = 0;

	if (montant >= 25)
	{
		while (montant >= 25)
			montant -= 25, piece++;
	}
	if (montant >= 10 && montant < 25)
	{
		while (montant >= 10)
			montant -= 10, piece++;
	}
	if (montant >= 5 && montant < 10)
	{
		while (montant >= 5)
			montant -= 5, piece++;
	}
	if (montant >= 2 && montant < 5)
	{
		while (montant >= 2)
			montant -= 2, piece++;
	}
	if (montant >= 1 && montant < 2)
	{
		while (montant >= 1)
			montant -= 1, piece++;
	}
	printf("%d\n", piece++);
	return (0);
}
