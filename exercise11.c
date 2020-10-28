#include <stdio.h>

int main()
{
	float celsius = 0.0f;
	float faren = 0.0f;


	printf("Introduce the temperature in celsius: ");
	scanf_s("%f", &celsius);

	faren = ((celsius * 9) / 5) + 32;
	printf("The temperature in farenheit is: %f", faren);

	return 0;

}