#include <stdio.h>

int main()
{
	float num01 = 0.0f;
	float num02 = 0.0f;
	char operator = 0;
	float result = 0.0f;
	int error = 1;

	while (error == 1)
	{
		printf("Introduce the operation: \n");
		scanf_s("%f", &num01);
		scanf_s(" %c", &operator);
		scanf_s("%f", &num02);

		if (operator == 43)
		{
			result = num01 + num02;
			error = 0;
		}
		else if (operator == 45)
		{
			result = num01 - num02;
			error = 0;
		}
		else if (operator == 42) 
		{
			result = num01 * num02; 
			error = 0;
		}
		else if (operator == 47) 
		{
			result = num01 / num02;
			error = 0;
		}
		else 
		{
			printf("Not a valid operator\n");
			error = 1;
		}
	}
	
		
	printf("%f %c %f = %f", num01, operator, num02, result);
	return 0;

}