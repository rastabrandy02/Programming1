#include <stdio.h>

int main()
{
	int number01 = 0;
	int number02 = 0;
	int product = 0;

	printf("Introduce your number:");
	scanf_s("%i", &number01);

	printf("Introduce the times this number will be multiplied: ");
	scanf_s("%i", &number02);

	while (number02 > 0)
	{
		product += number01;
		number02--;

		if (number02 == 0) printf("%i", number01);
		else printf("%i + ", number01);
	
	}

	printf(" = %i", product);

	return 0;

}