#include "main.h"
/**
 *main - _putchar
 *Return: 0
 */

int main(void)
{
	char c[8] = "_putchar";
	int i = 0;

	while (c[i] != '\0')
	{
	_putchar(c[i++]);
	}
	_putchar('\n');

	return (0);
}
