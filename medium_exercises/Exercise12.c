#include <stdio.h>

int main()
{
	int base = 0;
	int baseStart = 0;
	int power = 0;

	printf("Introduce the value of the base: ");
	scanf_s("%i", &base);

	printf("Introduce the value of the power: ");
	scanf_s("%i", &power);


	printf("%i to te power of %i = ", base, power);
	baseStart = base;

	int RaiseToPower(base, power, baseStart);
	{
		if (power > 0)
		{
			while (power > 1)
			{
				base = base * baseStart;
				power--;

			}
		}

		else base = 1;
	}

	printf("%i", base);

	return 0;


}