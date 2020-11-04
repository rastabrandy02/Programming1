#include <stdio.h>

int main()
{
	int num[] = { 0 };
	int total = 0;
	
	printf("The prime number from 1 to 20 are: \n");
	
	for (int i = 2, isPrime = 0, p = 0; i < 20; i++)
	{
		 isPrime = 1;

		for (int a = 2; a < i; a++)
		{
			if ((i % a) == 0)
			{
				isPrime = 0;
				break;

			}

		}
	
		if (isPrime == 1)
		{
			
			num[p] = i;
			p++;
			//printf("%i\n", i);
			
		}
	
	}
	for (int k = 0; k <= 7; k++)
	{

		printf("num[%i] %i\n", k, num[k]);
	}
	total = num[0] + num[1] + num[2] + num[3] + num[4] + num[5] + num[6] + num[7];
	printf("The sum of all these numbers is %i", total);
	
	return 0;
	
}