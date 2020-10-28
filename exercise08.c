#include <stdio.h>
#define PI 3.14159

int main()
{
	float radius = 0.0f;
	float diameter = 0.0f;
	float circumference = 0.0f;
	float area = 0.0f;



	printf("Introduce the radius: ");
	scanf_s("%f", &radius);

	diameter = radius * 2;
	circumference = 2 * PI * radius;
	area = PI * radius * radius;

	printf("The diameter is %f\n", diameter);
	printf("The circumference is %f\n", circumference);
	printf("The area is %f\n", area);


	return 0;
}