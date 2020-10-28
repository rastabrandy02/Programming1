#include <stdio.h>


int main ()
{

	int angle1 = 0;
	int angle2 = 0;
	int angle3 = 0;


	printf("Introduce the first angle: ");
	scanf_s("%i", &angle1);

	printf("Introduce the second number: ");
	scanf_s("%i", &angle2);


	angle3 = 180 - (angle1 + angle2);

	printf("The third angle is %i", angle3);

	return 0;

}