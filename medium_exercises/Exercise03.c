#include <stdio.h>


int main()
{
	int	numA = 0;
	int numB = 0;
	int numC = 0;
	printf("Introduce the first number\n");
	scanf_s("%i", &numA);

	printf("Introduce the second number\n");
	scanf_s("%i", &numB);

	printf("Introduce the third number\n");
	scanf_s("%i", &numC);

	if ((numA > numB) && (numA > numC))
	{
	printf("The first number is the biggest one");
	
	}
	else if ((numB > numA) && (numB > numC))
	{
		printf("The second number is the biggest one");
	
	}
	else if ((numC > numA) && (numC > numB))
	{
	
		printf("The third number is the biggest one");
	
	}
	return 0;
}