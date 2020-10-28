#include <stdio.h>

int main()
{
	float prod1 = 0.0f;
	float prod2 = 0.0f;
	float prod3 = 0.0f;
	float final = 0.0f;


	printf("Introduce the price of the first product: ");
	scanf_s("%f", &prod1);

	printf("Introduce the price of the second product: ");
	scanf_s("%f", &prod2);

	printf("INtroduce the price of the third product: ");
	scanf_s("%f", &prod3);

	final = (prod1 + prod2 + prod3) * 0.85f;

	printf("The final price is %f", final);

	return 0;
}