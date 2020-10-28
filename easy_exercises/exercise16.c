#include <stdio.h>

int main()
{


	float ex1 = 0.0f;
	float ex2 = 0.0f;
	float ex3 = 0.0f;
	float ex4 = 0.0f;
	float totalClassValue;

	float partial = 0.0f;
	float partialValue = 0.0f;

	float final = 0.0f;
	float finalValue = 0.0f;

	float result = 0.0f;

	printf("Introduce the mark of the first class exercise: ");
	scanf_s("%f", &ex1);

	printf("Introduce the mark of the second class exercise: ");
	scanf_s("%f", &ex2);

	printf("Introduce the mark of the third class exercise: ");
	scanf_s("%f", &ex3);
	
	printf("Introduce the mark of the forth class exercise: ");
	scanf_s("%f", &ex4);

	totalClassValue = (ex1 * 0.1f + ex2 * 0.1f + ex3 * 0.1f + ex4 * 0.1f);

	printf("Introduce the mark of the partial exam: ");
	scanf_s("%f", &partial);

	partialValue = partial * 0.3f;


	printf("Introduce the mark of the final exam: ");
	scanf_s("%f", &final);

	finalValue = final * 0.3f;




	result = totalClassValue + partialValue + finalValue;

	printf("Your final mark is: %f", result);


	return 0;



}