#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int input = 1;
	int number = 0;
	
	
	printf("This is the lottery winner: ");

	while (input != 0)
	{
		srand(time(NULL));
		//scanf_s("%i", &input);
		 number = rand();
		if ((number > 9999) && (number < 99999) )
		{
			printf("\n%i\n", number);
			break;
		}
		else input = 1;
	}
}
