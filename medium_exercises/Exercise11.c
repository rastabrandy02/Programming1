#include <stdio.h>

int main()
{

	int number = 0;


	printf("Introduce one number: ");
	scanf_s("%i", &number);
	int IsNegative(number);
	{
		if (number < 0) printf("Your number is negative");
		else if (number == 0) printf("Your number is 0, nor negative or possitive");
		else printf("Your number is positive");
	
	}

	return 0;

}