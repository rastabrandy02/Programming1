#include <stdio.h>

int main()
{
	float centi = 0.0f;
	float inch = 0.0f;

	printf("Introduce the value in cenitmeters: ");
	scanf_s("%f", &centi);

	inch = centi / 2.54f;

	printf("The value in inches is %f", inch);

	return 0;
}