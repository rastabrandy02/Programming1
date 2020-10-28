#include <stdio.h>

int main()
{
	int number = 0;
	int counter = 0;
	int result = 0;

	printf("Introduce one number to show it's multiple table: ");
	scanf_s("%i", &number);

	while (counter < 11)
	{
		result = counter * number;
		printf("%i * %i = %i\n", number, counter, result);
		counter++;
	
	}

	return 0;

}