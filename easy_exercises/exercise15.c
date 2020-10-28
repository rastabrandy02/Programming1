#include<stdio.h>


int main()
{
	float seconds = 0.0f;
	float minutes = 0.0f;
	float hours = 0.0f;
	float days = 0.0f;


	printf("Introduce the number of seconds: ");
	scanf_s("%f", &seconds);

	minutes = seconds / 60;
	hours = minutes / 60;
	days = hours / 24;

	printf("The number of minutes is %f\n The number of hours is %f\n The number of days is %f", minutes, hours, days);

	return 0;

}