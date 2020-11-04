#include <stdio.h>

int main()
{
	int num = 0;
	int binary = 0;

	printf("Introduce a number to see its binary equivalent: ");
	scanf_s("%i", &num);

	while(num >= 1)
	{
		binary = num % 2;
		
		
		printf("%i", binary);
		num = num / 2;
		
		
	}
	return 0;
}