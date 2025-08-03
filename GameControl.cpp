#include "GameControl.h"
#include "raylib.h"
#include "Tabuleiro.h"
//ControladorFluxo
void GameControl::FluxoGame()
{
	InitWindow(ResLarg *10, ResAlt *10, "SnakeRush");
	SetTargetFPS(60);

	Tabuleiro Tab(ResLarg, ResAlt);
	Tab.InitTab();
	while(!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(GREEN);
		Tab.ImprimirTab();
		EndDrawing();
	}
	CloseWindow();

}
