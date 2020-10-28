#include <stdio.h>

int main()
{
	int month = 0;
	
	
	printf("Introduce the number of one month: ");
	scanf_s("%i", &month);

	if ( month == 1)
	{
		printf("Your month is January!\nJanuary has 31 days");
	
	
	}
	else if (month == 2)
	{
		printf("Your month is February!\nFebruary has 28 (or 29) days");


	}

	else if (month == 3)
	{
		printf("Your month is March!\nMarch has 31 days");


	}
	else if (month == 4)
	{
		printf("Your month is April!\nApril has 30 days");


	}
	else if (month == 5)
	{
		printf("Your month is May!\nMay has 31 days");


	}
	else if (month == 6)
	{
		printf("Your month is June!\nJune has 30 days");


	}
	else if (month == 7)
	{
		printf("Your month is July!\nJuly has 31 days");


	}
	else if (month == 8)
	{
		printf("Your month is August!\nAugust has 31 days");


	}
	else if (month == 9)
	{
		printf("Your month is September!\nSeptember has 30 days");
	

	}
	else if (month == 10)
	{
		printf("Your month is October!\nOctober has 31 days");


	}
	else if (month == 11)
	{
		printf("Your month is November!\nNovember has 30 days");


	}
	else if (month == 12)
	{
		printf("Your month is December!\nDecember has 31 days");


	}
	else 
	{
		printf("You know that the months are counted from 1 to 12...\nRight?");


	}
	return 0;
}