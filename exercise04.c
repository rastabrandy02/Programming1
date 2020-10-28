#include <stdio.h>


int main()
{
	float num01 = 0.0f;
	float num02 = 0.0f;
	float mean = 0.0f;



	printf("Introduce the first number: ");
	scanf_s("%f", &num01);

	printf("INtroduce the second number: ");
	scanf_s("%f", &num02);

	mean = (num01 + num02) / 2;

	printf("The mean of those numbers is %f", mean);

	return 0;
}