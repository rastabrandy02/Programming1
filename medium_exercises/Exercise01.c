#include <stdio.h>


int main()
{

	int num = 0;
	printf("Enter a number: ");
	scanf_s("%i", &num);



	if (num % 2 == 0)
	{
		printf("Your number is even");


	}
	else
	{
		printf("Your number is odd");
	}

	return 0;
}