#include <stdio.h>


int main()
{
	int age = 0;
	int pulses = 0;


	printf("How old are you? ");
	scanf_s("%i", &age);

	pulses = (220 - age) / 10;

	printf("Your pulses should be: %i", pulses);


}