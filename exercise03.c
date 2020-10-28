#include <stdio.h>

int main()
{
	int num01 = 0;
	int num02 = 0;
	int sum = 0;
	int subs = 0;
	int multi = 0;
	float division = 0.0f;

	printf("Introduce the first number: ");
	scanf_s("%i", &num01);

	printf("Introduce the scond number: ");
	scanf_s("%i", &num02);

	sum = num01 + num02;
	subs = num01 - num02;
	multi = num01 * num02;
	division = (float)num01 / (float)num02;

	printf("The sum of those numbers is %i\n", sum);
	printf("The substaractiuon of those numbers is %i\n", subs);
	printf("The multiplication of those numbers is %i\n", multi);
	printf("The division of those numbers is %f\n", division);

	return 0;

}