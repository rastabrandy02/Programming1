#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int grid[3][3] = { 0 };
	int isEmpty = 1;
	int cpuX = 0, cpuY = 0;
	int playerX = 0, playerY = 0;
	int error = 1;
	int win = 0;

	/*
	Table pos
	| 0| 1| 2|
	|3 | 4| 5|
	|6 | 7| 8|

	*/

	while (win == 0)
	{
		srand(time(NULL));

		while (isEmpty == 1)
		{
			cpuX = rand() % 3;
			cpuY = rand() % 3;

			if (grid[cpuX][cpuY] == 0)
			{
				grid[cpuX][cpuY] = 1;
				isEmpty = 0;
			}


		}
		isEmpty = 1;
		for (int k = 0; k < 3; k++)
		{
			printf("  |_____|______|______|\n");
			printf("  |%i    | %i    | %i    |\n", grid[k][0], grid[k][1], grid[k][2]);
			

		}
		while (error == 1)
		{

			printf("Introduce position (x, y)\n Position goes from 0 to 2\n");
			printf("\nLine:");
			scanf_s("%i", &playerX);
			printf("\nColumn:");
			scanf_s("%i", &playerY);

			if ((playerX >= 0) && (playerX < 3) &&
				(playerY >= 0) && (playerY < 3))
			{
				if (grid[playerX][playerY] == 0)
				{
					grid[playerX][playerY] = 2;
					error = 0;
				}
				else error = 1;

			}
			else error = 1;

		}
		error = 1;
		/*
		Table pos
		|0,0 |, 0,1|02|
		|1,0 | 1,1|1,2|
		|2,0 | 2,1|2,2|

		*/
		
		if ((grid[0][0] == 2) && (grid[0][1] == 2) && (grid[0][2] == 2)||
			(grid[1][0] == 2) && (grid[1][1] == 2) && (grid[1][2] == 2)||
			(grid[2][0] == 2) && (grid[2][1] == 2) && (grid[2][2] == 2)||
			(grid[0][0] == 2) && (grid[1][0] == 2) && (grid[2][0] == 2)||
			(grid[0][1] == 2) && (grid[1][1] == 2) && (grid[2][1] == 2)||
			(grid[0][2] == 2) && (grid[1][2] == 2) && (grid[2][2] == 2)||
			(grid[0][0] == 2) && (grid[1][1] == 2) && (grid[2][2] == 2)||
			(grid[2][0] == 2) && (grid[1][1] == 2) && (grid[0][2] == 2) )
		{
			printf("Congratulations!\n You have won the CPU!");
			win = 1;
		
		}
		 if ((grid[0][0] == 1) && (grid[0][1] == 1) && (grid[0][2] == 1)||
			(grid[1][0] == 1) && (grid[1][1] == 1) && (grid[1][2] == 1) ||
			(grid[2][0] == 1) && (grid[2][1] == 1) && (grid[2][2] == 1) ||
			(grid[0][0] == 1) && (grid[1][0] == 1) && (grid[2][0] == 1) ||
			(grid[0][1] == 1) && (grid[1][1] == 1) && (grid[2][1] == 1) ||
			(grid[0][2] == 1) && (grid[1][2] == 1) && (grid[2][2] == 1) ||
			(grid[0][0] == 1) && (grid[1][1] == 1) && (grid[2][2] == 1) ||
			(grid[2][0] == 1) && (grid[1][1] == 1) && (grid[0][2] == 1))
		 {
			printf("Seems like the CPU just won\n Good Luck next time");
			win = 1;

		 }
	}
	
	return 0;
}
