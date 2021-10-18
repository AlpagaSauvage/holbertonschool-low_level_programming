#include "main.h"

/**
 * print_chessboard - print chessboard
 * @a: string
 */

void print_chessboard(char (*a)[8])
{
	int c, l;

	for (c = 0; c < 8; c++)
	{
		for (l = 0; l < 8; l++)
		{
			_putchar(a[c][l]);
		}
		_putchar('\n');
	}
}
