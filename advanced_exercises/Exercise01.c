#include <stdio.h>

int main()
{
	int num = 0;
	int counter = 1;

	printf("Introduce one number to see all the multiples of 3 under that number: ");
	scanf_s("%i", &num);

	while (counter <= num)
	{
		if ((counter % 3) == 0) printf("%i is a multiple of 3\n", counter);
		
		counter++;

	}

	return 0;

}