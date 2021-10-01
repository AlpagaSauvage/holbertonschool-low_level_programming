#include <stdio.h>

/**
* main - Print Numbers
* Return: 0
*/

int main(void)
{
	char c = '0';
	char b = 'a';

	do {
		putchar(c);
		++c;
	} while (c <= '9');
	do {
		putchar(b);
		++b;
	} while (b <= 'f');
	putchar('\n');
	return (0);
}
