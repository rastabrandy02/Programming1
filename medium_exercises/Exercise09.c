#include <stdio.h>

int main()
{
	int counter = 0;
	int number = 0;
	int sum = 0;
	printf("Welcome to the infinite summatory, all the numbers will be added to the previous one\nAdd 0 to finish the sum\n");

	while (counter == 0)
	{
		printf("Introduce one number: ");
		scanf_s("%i", &number);
		if (number != 0)
		{

			sum = sum + number;
			printf("The accumulated sum is: %i\n", sum);

		}
		else counter++;
	
	}

	return 0;
}