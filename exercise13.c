#include <stdio.h>

int main()
{
	float initial = 0.0f;
	float result = 0.0f;

	printf("Introduce the price without the IVA: ");
	scanf_s("%f", &initial),

	result = initial * 1.21f;

	printf("Your final price is: %f", result);

	return 0;

}