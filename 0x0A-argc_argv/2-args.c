#include <stdio.h>

int main(int argc __attribute__((unused)), char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);	
}
