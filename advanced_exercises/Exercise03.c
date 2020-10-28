#include <stdio.h>
int GiveDays(int years, int months, int days);
int GiveHours(int days);
int GiveMinutes(int hours);


int main()
{
	int bday = 0;
	int bmonth = 0;
	int byear = 0;

	printf("Introduce your birth date (DD/MM/YYYY): ");
	scanf_s("%i/%i/%i", &bday, &bmonth, &byear);


	printf("\nYour birth date is: %i/%i/%i\n", bday, bmonth, byear);
	printf("Days passed since your birth date: %i\n", GiveDays(byear, bmonth, bday));
	printf("Hours passed since your birth date: %i\n", GiveHours(GiveDays(byear, bmonth, bday)));
	printf("Minutes passed since your birth date: %i\n", GiveMinutes(GiveHours(GiveDays(byear, bmonth, bday))));

	return 0;
}

int GiveDays(int years, int months, int days)
{
	 years = 2020 - years;
	 months = 12 * years + (10 - months);
	 days = 30 * months + (22 - days);
	return days;
}
int GiveHours (int days)
{
	return (days * 24);
}
int GiveMinutes(int hours)
{
	return (hours * 60);
}


