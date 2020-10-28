#include <stdio.h>

int main()
{
	int counter = 0;
	int num = 1;
	int div = 1;
	
	printf(" Prime Number from 1 to 100 are: \n");
	printf("1\n");
	while(num <= 100)
	{
		div = 2;
		counter = 0;

		while (div <= num/2)
		{
			if (num % div == 0) 
			{
				counter = 1;
				break;
			}
			
			div++;
		}

		if (counter == 0 && num != 1)
		{
			printf("%i\n", num);
		
		}
		
		num++;
		
	}

	return 0;
}
