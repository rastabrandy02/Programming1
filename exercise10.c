#include <stdio.h>

int main()
{
	int centi = 0;
	int meter = 0;
	int kilo = 0;


	printf("Introduce the value in centimeters: ");
	scanf_s("%i", &centi);

	meter = centi / 100;
	kilo = meter / 1000;

	printf("The value in meters is: %i\n", meter);
	printf("The value in kilometers is: %i\n", kilo);

	return 0;

}