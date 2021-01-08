#include "raylib.h" 
#include "stdlib.h"
#include "time.h"
#define CELL_NUM  8
#define CELL_COLORS 4


int main(void)
{
	//INITIALIZE VALUES

	
	
	srand(time(NULL));
	const int windowWidth = 800;
	const int windowHeight = 500;
	const int margin = 35;

	InitWindow(windowWidth, windowHeight, "window");

	
	int cellSide = 150;
	Rectangle cell[CELL_NUM] = { 0 };
	int cellState[CELL_NUM] = { 0 };
	int cellValue[CELL_NUM] = { 0 };
	Rectangle background = { 25, 25, 725, 360 };

	Vector2 mousePos = { 0 };
	int guessCounter = 0;
	int auxValue = 0;
	int gameState = 0;

	int frames = 0;
	bool colorFound[CELL_COLORS] = { false };

	int gamesPlayed = 0;
	
	


	//SET RECTANGLE POS

	for (int i = 0; i < CELL_NUM; i++)
	{
		if (i < 4)
		{
			cell[i].width = cellSide;
			cell[i].height = cellSide;
			cell[i].x = (margin + (i * cellSide) + (margin * i));
			cell[i].y = margin;
		}
		else if (i >= 4)
		{
			cell[i].width = cellSide;
			cell[i].height = cellSide;
			cell[i].x = margin + ((i - 4) * cellSide) + ((i - 4) * margin);
			cell[i].y = (2 * margin) + cellSide;
		}

	}
	
	SetTargetFPS(60);
	while (!WindowShouldClose())
	{
		mousePos = GetMousePosition();
		if (gameState == 0)
		{
			
			for (int i = 0; i < CELL_NUM; i++)
			{
				cellValue[i] = 0;
				cellState[i] = 0;
			}
			for (int i = 0, aux = 0; i < (CELL_NUM / CELL_COLORS); i++)
			{
				aux = GetRandomValue(0, (CELL_NUM - 1));
				if (cellValue[aux] == 0) cellValue[aux] = 1;
				else i--;

			}
			for (int i = 0, aux = 0; i < (CELL_NUM / CELL_COLORS); i++)
			{
				aux = GetRandomValue(0, (CELL_NUM - 1));
				if (cellValue[aux] == 0) cellValue[aux] = 2;
				else i--;

			}
			for (int i = 0, aux = 0; i < (CELL_NUM / CELL_COLORS); i++)
			{
				aux = GetRandomValue(0, (CELL_NUM - 1));
				if (cellValue[aux] == 0) cellValue[aux] = 3;
				else i--;

			}
			for (int i = 0, aux = 0; i < (CELL_NUM / CELL_COLORS); i++)
			{
				aux = GetRandomValue(0, (CELL_NUM - 1));
				if (cellValue[aux] == 0) cellValue[aux] = 4;
				else i--;

			}
			if (IsKeyPressed(KEY_SPACE)) gameState = 1;
	
		}
		if (gameState == 1)
		{
			
			//CHECK ACTIVATION

			if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
			{
				for (int i = 0; i < CELL_NUM; i++)
				{
					if (CheckCollisionCircleRec(mousePos, 5, cell[i]))
					{
						cellState[i] = 1;
						if (cellValue[i] == auxValue)
						{
							guessCounter = 0;
						}
						
						else guessCounter++;
						auxValue = cellValue[i];
						
					}
				}
			}
			
			if (guessCounter > 1)
			{
				for (int i = 0; i < CELL_NUM; i++)
				{
					cellState[i] = 0;
					
				}
				guessCounter = 0;
				auxValue = 0;
			}
			//CHECK WIN CONDITION
			for (int i = 0, counter = 0; i < CELL_NUM; i++)
			{
				if (cellState[i] == 1) counter++;
				if (counter == CELL_NUM) gameState = 2;
			}
		}
		if (gameState == 2)
		{
			if (IsKeyPressed(KEY_SPACE))
			{
				gamesPlayed++;
				gameState = 0;
			}
				
		}
		frames++;
		BeginDrawing();
		
		
		if (gameState == 0)
		{
			ClearBackground(SKYBLUE);
			DrawText("COLOR MEMORY", 200, (windowHeight / 2) - 60, 50, RED);
			if ((frames / 30) % 2) DrawText("Press Space to Start", 200, (windowHeight / 2), 35, PINK);
			DrawText(TextFormat("Total Games Played: %i", gamesPlayed), margin, windowHeight - margin, 25, BLACK);
		}
	    
		
		else if (gameState == 1)
		{
			ClearBackground(RAYWHITE);
			DrawRectangleRec(background, BROWN);
			for (int i = 0; i < CELL_NUM; i++)
			{
				DrawRectangleRec(cell[i], BLACK);
				if ((cellState[i] == 1) && (cellValue[i] == 1))
				{
					DrawRectangleRec(cell[i], ORANGE);
				}
				if ((cellState[i] == 1) && (cellValue[i] == 2))
				{
					DrawRectangleRec(cell[i], BLUE);
				}
				if ((cellState[i] == 1) && (cellValue[i] == 3))
				{
					DrawRectangleRec(cell[i], RED);
				}
				if ((cellState[i] == 1) && (cellValue[i] == 4))
				{
					DrawRectangleRec(cell[i], GREEN);
				}

			}
		}
		else if (gameState == 2)
		{
			ClearBackground(YELLOW);
			DrawText("YOU WIN", 225, 100, 80, GREEN);
			if ((frames / 30) % 2) DrawText("[Space] Return to menu", 150, 250, 40, PINK);	
		}

		DrawCircleV(mousePos, 5, GREEN);
		EndDrawing();
	}
	CloseWindow();
	return 0;
}
