#include <stdio.h>

int main()
{
	float num01 = 0.0f;
	float num02 = 0;
	char operation = 0;
	int counter = 5;
	printf("Welcome to the infinite calculator, now you will choose a succession of values and operators to see the results\n(The infinite calculator is really infinite so introduce a weird operator to exit)\n");
	printf("\nWrite the first number to start the program: ");
	scanf_s("%f", &num01);

	while (counter > 0)
	{

		printf("Write your desired operation: ");
		scanf_s(" %c", &operation);
		//getchar();
		printf("Write another number: ");
		scanf_s("%f", &num02);
		printf("%2.2f %c %2.2f = ", num01, operation, num02);

		switch (operation)
		{
		case 43: //summ
		{
			num02 = num01 + num02;
			printf("%2.2f\n", num02);
			break;
		}
		case 45: //substraction
		{
			num02 = num01 - num02;
			printf("%2.2f\n", num02);
			break;
		}
		case 42: //multiplicacion
		{
			num02 = num02 * num01;
			printf("%2.2f\n", num02);
			break;
		}
		case 47: //division
		{
			num02 = num02 / num01;
			printf("%2.2f\n", num02);
			break;
		}
			default: 
			{
				printf("This operator is not valid, you will close the infinite calculator");
				counter = 0;
				break;
			}
		}
		num01 = num02;
		


		
	}
	return 0;
}