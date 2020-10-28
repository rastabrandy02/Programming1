#include <stdio.h>


int main()
{
	char character = 0;
	printf("Introduce your letter:");
	scanf_s("%c", &character);
	


	if ( ( (character > 64 && character < 91) || (character > 96 && character < 123)) && (character != 65 && character !=97 & character !=69 && character!= 101 && character != 73 && character != 105 && character != 79 && character != 111 && character != 85 && character != 117 ))
	{
		printf("Your letter is NOT a vowel");
	
	
	}
	else if (character == 65 || character == 97 || character == 69 || character == 101 || character == 73 || character == 105 || character == 79 || character == 111 || character == 85 || character == 117 )
	{
		printf("Your letter is a vowel");
	
	}
	
	else 
	{
		printf("Error\nDid you even put a letter on the console?");
	
	
	}
	

	return 0;
	
}