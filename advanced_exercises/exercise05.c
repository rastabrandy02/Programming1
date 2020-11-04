#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int userNum = 0;
	int randNum = 0;
	srand(time(0));

	printf("Introduce a number to compare it with a random one: ");
	scanf_s("%i", &userNum);
	randNum = rand() % 100;
	printf("The random number is %i\n", randNum);

	if (userNum < randNum)printf("Your number is lowe than the random one");
	else if (userNum > randNum)printf("Your number is greater than the random one");
	else printf("Your number is equal to the random one");

	return 0;


}