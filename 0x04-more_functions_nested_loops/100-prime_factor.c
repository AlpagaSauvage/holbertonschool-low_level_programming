#include <stdio.h>

int main(void)
{
	long int n;
	n = 612852475143;
	while (n != 0)
	{
		long int div = 2, maxFact;
	
			if(n % div !=0)
			div = div + 1;
			else
			{
				maxFact = n;
				n = n / div;
				if(n == 1)
				{
					printf("%li i",maxFact);
					break;
				}
			}
	}
   return 0;
}
