#include <stdio.h>

int main()
{
	int numberA = 1;
	int numberB = 1;
	int sumResult = 0;
	int prodResult = 0;

	int counter = 0;

	printf("The initial value of the acumulated number is 1 by default\n");

	while (counter <= 10)
	{
		printf("Introduce one number: ");
		scanf_s("%i", &numberA);
		printf("\n\n");
		if (counter == 0)
		{

			sumResult = numberA + numberB;
			prodResult = numberA * numberB;

			printf("The sum of those numbers is %i\n", sumResult);
			printf("The product of those numbers is %i\n", prodResult);

		}

		else 
		{
			sumResult = sumResult + numberA;
			prodResult = prodResult * numberA;


			printf("The accumulated sum is: %i\n", sumResult);
			printf("The accumulated product is: %i\n", prodResult);
		
		
		}
		counter++;
	
	
	}

	printf("You have arrived to 10 numbers, the final results are: \n");
	printf("TOTAL SUM: %i\n", sumResult);
	printf("TOTAL PRODUCT: %i\n", prodResult);

	return 0;


}