#include <stdio.h>

int main() 
{
	float base = 0.0f;
	float height = 0.0f;
	float area = 0.0f;

	printf("Introduce the base of the triangle: ");
	scanf_s("%f", &base);


	printf("Introduce the height of the triangle: ");
	scanf_s("%f", &height);

	area = (base * height) / 2;

	printf("The area of the triangle is %f", area);
	return 0;

}