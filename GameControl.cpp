#include "GameControl.h"
#include "raylib.h"

void GameControl::FluxoGame()
{
	InitWindow(ResLarg, ResAlt, "SnakeRush");
	SetTargetFPS(60);

	while (!WindowShouldClose())
	{
		BeginDrawing();
		EndDrawing();
	}
	CloseWindow();

}
