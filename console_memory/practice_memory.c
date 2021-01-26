#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define CELLNUM 4

void AssignValues(int* array, int size);


int main()
{
	
	
	srand(time(NULL));

	int cell[CELLNUM] = { 0 };
	int cellValue[CELLNUM] = { 0 };
	

	int selection = 0;
	int selectionNum = 0;
	int maxSelection = 2;
	int correct = 0;
	int auxI = 0;
	int auxJ = 0;

	int cellsGuessed = 0;

	int gameLoop = 1;
	int reset = -1;

	printf("WELCOME TO THE INFINITE MEMORY!\n");

	AssignValues(cellValue, CELLNUM);
	
	
	while (gameLoop)
	{
		

		printf("Select the cell you want to see (0 - 3)\n");
		scanf_s("%i", &selection);
		while ((selection >= CELLNUM) || (selection < 0))
		{
			printf("Select a valid cell\n");
			scanf_s("%i", &selection);
		}

		cell[selection] = 1;
		selectionNum++;
		printf("The value of this cell is %i\n\n\n", cellValue[selection]);
		for (int i = 0; i < CELLNUM; i++)
		{
			if (cell[i] == 1)
			{
				for (int j = 0; j < CELLNUM; j++)
				{
					if ((cell[j] == cell[i]) && (i != j))
					{
						if (cellValue[i] == cellValue[j])
						{
							if ((auxI != i) && (auxJ != j))
							{
								selectionNum = 0;
								correct = 1;
								auxI = i;
								auxJ = j;
							}
							
						}
					}
				}
			}
		}

		if (correct == 1)
		{
			printf("\nCORRECT!\n");
			correct = 0;
		}
		if (selectionNum >= maxSelection)
		{
			for (int i = 0; i < CELLNUM; i++) cell[i] = 0;

			
			selectionNum = 0;
			system("cls");
			printf("All cells have been deselected\n");
		}
		for (int i = 0; i < CELLNUM; i++)
		{
			if (cell[i] == 1) cellsGuessed++;
			//else cellsGuessed = 0;
		}
		if (cellsGuessed == CELLNUM)
		{
			printf("CONGRATULATIONS, YOU WON!\n\n");
			printf("Do you want to play again?\n0-NO\n1-YES\n");
			scanf_s("%i", &reset);

		}
		else cellsGuessed = 0;
		if (reset == 1)
		{
			AssignValues(cellValue, CELLNUM);
			for (int i = 0; i < CELLNUM; i++) cell[i] = 0;
			selection = 0;
			selectionNum = 0;
			maxSelection = 2;
			correct = 0;
			auxI = 0;
			auxJ = 0;

			cellsGuessed = 0;

			gameLoop = 1;
			reset = -1;


		}
		else if (reset != 0) reset = -1;
		else if (reset == 0) gameLoop = 0;


	}
	
	
	return 0;
}
void AssignValues(int* array, int size)
{
	
	for (int i = 0; i < size; i++) array[i] = 0;
	
	for (int i = 0, aux = 0; i < 2; i++)
	{
		aux = rand() % size;
		if (array[aux] == 0) array[aux] = 1;
		else i--;
		
	}
	for (int i = 0, aux = 0; i < 2; i++)
	{
		aux = rand() % size;
		if (array[aux] == 0) array[aux] = 2;
		else i--;

	}
}