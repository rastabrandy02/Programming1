#include <stdio.h>

int main()
{
	int number = 1;
	int sum = 0;
	int count = 0;
	int group = 0;


	while (number != 0)
	{
		printf("Introduce number %02i: ", (count + 1));
		scanf_s("%i", &number);
		sum += number;
		
		if (number != 0)count++;
	
	}

	printf("The sum of the %i numbers introduced is: %i\n", count, sum);
	printf("The mean of the %i numbers introduced is: %2.2f\n", count, ((float)sum / (float)count));

	return 0;

}