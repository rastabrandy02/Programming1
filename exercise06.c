#include <stdio.h>


int main()
{
	int width = 0;
	int height = 0;
	int perimeter = 0;
	int area = 0;


	printf("Introduce the width: ");
	scanf_s ("%i", &width);
	

	printf("Introduce the height: ");
	scanf_s ("%i", &height);
	


	perimeter = 2 * width + 2 * height;
	area = width * height;

	printf("The perimeter is %i\n The area is %i", perimeter, area);

	return 0;
}