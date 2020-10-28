#include <stdio.h>

void Calculator(float value1, float value2, char operator, float* result, int* error);
void DrawMenu(void);

int main()
{
	float num01 = 0.0f;
	float num02 = 0.0f;
	char operator = 0;
	float result = 0.0f;
	int error = 0;

	printf("Write the first number: ");
	scanf_s("%f", &num01);

	while (error != 1)
	{
		DrawMenu();
	
		
		scanf_s(" %c", &operator);
		
		printf("Introduce the second number: ");
		scanf_s("%f", &num02);

		Calculator(num01, num02, operator, &result, &error);

		if (error != 1) printf("%2.2f %c %2.2f = %2.2f\n", num01, operator, num02, result);
		else if (error = 1) printf("Exiting the program...\n");
		else printf("ERROR!\nThe operator introduced is not a valid operator\n");
		
		num01 = result;
	}

	return 0;
}


void Calculator(float value1, float value2, char operator,float *result, int *error)
{
	switch (operator)
	{
		case '+': //summ
		{
			*result = value1 + value2;
		} break;
		case 45: //substraction
		{
		*result = value1 - value2;
		break;
		}
		case 42: //multiplicacion
		{
		*result = value1 * value2;
		break;
		}
		case 47: //division
		{
		*result = value1 / value2;
		break;
		}
		case 115:
		{
			*error = 1;
			break;
		}
		case 83:
		{
			*error = 1;
			break;
		}
		default:
		{ 
			*error = 2;
			break;
		}
	}
	//if ((operator == "s") || (operator == "S")) *error = 1;
}


void DrawMenu(void)
{
	printf("Select your desired operation:\nSum (+)\nSubstraction (-)\nMultiplication (*)\nDivision(/)\nExit (s)\n");
	printf("Introduce the operation: ");


}
