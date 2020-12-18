
#include "raylib.h"
#include "stdlib.h"
#include "time.h"

int main(void)
{

	const int windowWidth = 800; 
	const int windowHeight = 500; 
	InitWindow(windowWidth, windowHeight, "TicTacToe");

	int cellWidth = 150;
	int cellHeight = 150;

	int firstRowPos = 10;
	int secondRowPos = cellHeight + 20;
	int thirdRowPos = (2 * cellHeight) + 30;
	int firstColumnPos = 300;
	int secondColumnPos = cellWidth + 310;
	int thirdColumnPos = (2 * cellWidth) + 320;

	int cellValue[3][3] = { 0 };
	int cpuRowSelection = 0;
	int cpuColumnSelection = 0;

	Rectangle cell[3][3] = { 0 };
	Rectangle aux = { 0, 0, cellWidth, cellHeight };
	Rectangle auxBackground = { 0,0, cellWidth + 7.5f, cellHeight + 7.5f };
	Rectangle background = { 0, 0, windowWidth, windowHeight };
	Vector2 mousePosition = { 0 };
	bool isPlayerTurn = true;
	srand(time(NULL));

	int win = 0;
	bool gameCounted = false;
	int winnedGames = 0;
	int totalGames = 0;
	int gameState = 0;
	int frames = 0;

	
	
	
	for (int i = 0; i < 3; i++)
	{
		cell[i][0].x = firstColumnPos;
		cell[i][1].x = secondColumnPos;
		cell[i][2].x = thirdColumnPos;
		for (int j = 0; j<3; j++)
		{
			if (i == 0) cell[i][j].y = firstRowPos;
			else if (i == 1) cell[i][j].y = secondRowPos;
			else if (i == 2) cell[i][j].y = thirdRowPos;
		
		
		}
		
	}
	
	
	SetTargetFPS(60);
	while (!WindowShouldClose())
	{
		win = 0;
		gameCounted = false;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cellValue[i][j] = 0;
			}
		}
		

		while(win == 0)
		{
			//Player Turn
			mousePosition = GetMousePosition();
			if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
			{
				for (int i = 0; i < 3; i++)
				{
					for (int j = 0; j < 3; j++)
					{
						if ((mousePosition.x > cell[i][j].x) && (mousePosition.x < cell[i][j].x + cellWidth) &&
							(mousePosition.y > cell[i][j].y) && (mousePosition.y < cell[i][j].y + cellHeight) &&
							(cellValue[i][j] == 0) && (isPlayerTurn == true))
						{
							cellValue[i][j] = 1;

						}


					}

				}
				isPlayerTurn = false;
			}
			//CPU Turn
			while (isPlayerTurn == false)
			{
				cpuRowSelection = rand() % 3;
				cpuColumnSelection = rand() % 3;
				if (cellValue[cpuRowSelection][cpuColumnSelection] == 0)
				{
					cellValue[cpuRowSelection][cpuColumnSelection] = 2;
					isPlayerTurn = true;
				}


			}
			//Check Win Condition
			if ((cellValue[0][0] == 1) && (cellValue[0][1] == 1) && (cellValue[0][2] == 1) ||
				(cellValue[1][0] == 1) && (cellValue[1][1] == 1) && (cellValue[1][2] == 1) ||
				(cellValue[2][0] == 1) && (cellValue[2][1] == 1) && (cellValue[2][2] == 1) ||
				(cellValue[0][0] == 1) && (cellValue[1][0] == 1) && (cellValue[2][0] == 1) ||
				(cellValue[0][1] == 1) && (cellValue[1][1] == 1) && (cellValue[2][1] == 1) ||
				(cellValue[0][2] == 1) && (cellValue[1][2] == 1) && (cellValue[2][2] == 1) ||
				(cellValue[0][0] == 1) && (cellValue[1][1] == 1) && (cellValue[2][2] == 1) ||
				(cellValue[0][2] == 1) && (cellValue[1][1] == 1) && (cellValue[2][0] == 1))
			{
				win = 1;
				
			}

			else if ((cellValue[0][0] == 2) && (cellValue[0][1] == 2) && (cellValue[0][2] == 2) ||
				(cellValue[1][0] == 2) && (cellValue[1][1] == 2) && (cellValue[1][2] == 2) ||
				(cellValue[2][0] == 2) && (cellValue[2][1] == 2) && (cellValue[2][2] == 2) ||
				(cellValue[0][0] == 2) && (cellValue[1][0] == 2) && (cellValue[2][0] == 2) ||
				(cellValue[0][1] == 2) && (cellValue[1][1] == 2) && (cellValue[2][1] == 2) ||
				(cellValue[0][2] == 2) && (cellValue[1][2] == 2) && (cellValue[2][2] == 2) ||
				(cellValue[0][0] == 2) && (cellValue[1][1] == 2) && (cellValue[2][2] == 2) ||
				(cellValue[0][2] == 2) && (cellValue[1][1] == 2) && (cellValue[2][0] == 2))
			{
				win = 2;
				
			}



			frames++;

			ClearBackground(RAYWHITE);
			BeginDrawing();
			if (gameState == 1)
			{
				for (int i = 0; i < 3; i++)
				{
					for (int j = 0; j < 3; j++)
					{

						auxBackground.x = cell[i][j].x - 3;
						auxBackground.y = cell[i][j].y - 3;
						DrawRectangleRec(auxBackground, BLACK);





					}
				}
				for (int i = 0; i < 3; i++)
				{
					for (int j = 0; j < 3; j++)
					{

						switch (cellValue[i][j])
						{
						case 0:
						{
							aux.x = cell[i][j].x;
							aux.y = cell[i][j].y;
							DrawRectangleRec(aux, BLACK);
						}break;
						case 1:
						{
							aux.x = cell[i][j].x;
							aux.y = cell[i][j].y;
							DrawRectangleRec(aux, SKYBLUE);
						}break;
						case 2:
						{
							aux.x = cell[i][j].x;
							aux.y = cell[i][j].y;
							DrawRectangleRec(aux, MAGENTA);
						}break;
						default:
							break;
						}
					}
				}
				
			}
			if (win == 1) gameState = 2;
			else if (win == 2) gameState = 3;

			if (gameState == 0)
			{
				DrawRectangleRec(background, YELLOW);
				DrawText("WELCOME TO THE EXTREME", 20, 40, 50, SKYBLUE);
				DrawText("TIC-TAC-TOE", 20, 90, 50, SKYBLUE);
				if ((frames / 30) % 2)DrawText("Press Space to start", 20, 250, 30, PINK);
				if (IsKeyPressed(KEY_SPACE)) gameState = 1;
			}
			else if (gameState == 2)
			{
				DrawRectangleRec(background, YELLOW);
				DrawText("YOU WIN!!!", 20, 40, 50, GREEN);
				DrawText(TextFormat("Total Games Played: %i", totalGames), 20, 100, 20, BLACK);
				DrawText(TextFormat("Total Games Wined: %i", winnedGames), 20, 150, 20, BLACK);
				if ((frames / 30) % 2)DrawText("Press Space to play again", 20, 250, 30, PINK);
				if (IsKeyPressed(KEY_SPACE))
				{
					gameState = 1;
				}
			}
			else if (gameState == 3)
			{
				DrawRectangleRec(background, YELLOW);
				DrawText("CPU WINS!!!", 20, 40, 50, RED);
				DrawText(TextFormat("Total Games Played: %i", totalGames), 20, 100, 20, BLACK);
				DrawText(TextFormat("Total Games Wined: %i", winnedGames), 20, 150, 20, BLACK);
				if ((frames / 30) % 2)DrawText("Press Space to play again", 20, 200, 30, PINK);
				if (IsKeyPressed(KEY_SPACE))
				{
					gameState = 1;
				}
			}
			 
			EndDrawing();
		}
		if ((win == 1)&&(!gameCounted))
		{
			totalGames++;
			winnedGames++;
			gameCounted = true;
			
		}
		else if ((win == 2)&&(!gameCounted))
		{
			totalGames++;
			gameCounted = true;
		}

			

	}
	CloseWindow();
	return 0;
}







