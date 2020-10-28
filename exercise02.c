#include <stdio.h>


int main()
{
	int number01 = 0;
	int number02 = 0;

	printf("Introduce the first value ");
	scanf_s("%i", &number01);

	printf("Introduce the second value ");
	scanf_s("%i", &number02);

	printf("The sum of %i and %i is %i", number01, number02, number01 + number02);


	return 0;
}