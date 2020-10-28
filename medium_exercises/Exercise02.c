#include <stdio.h>

int main()
{
	int numA = 0;
	int numB = 0;


	printf("Introduce two numbers:\n ");
	scanf_s("%i %i", &numA, &numB);

	if (numA < numB)
	{
		printf("The first number is smaller");

	}

	else if (numA > numB)
	{
		printf("The first number is bigger");
	}
	else
	{
		printf("The numbers are even");
	}


	return 0;
}