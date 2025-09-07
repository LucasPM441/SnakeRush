#include <chrono>
#include "GameControl.h"
#include "raylib.h"
#include "Tabuleiro.h"
#include "Personagem.h"

//ControladorFluxo
void GameControl::FluxoGame()
{
	InitWindow(ResLarg *10, ResAlt *10, "SnakeRush");
	SetTargetFPS(60);

	Tabuleiro Tab(ResLarg, ResAlt);
	Tab.InitTab();
	Personagem Cobra(Tab.GetCelulas());

	auto countI = std::chrono::steady_clock::now();
	while(!WindowShouldClose())
	{
		auto countF = std::chrono::steady_clock::now();
		auto countTime = std::chrono::duration_cast<std::chrono::milliseconds>(countF - countI);

		BeginDrawing();
		ClearBackground(GREEN);
		Tab.ImprimirTab();
		Cobra.AtlzSnake();
		Cobra.MovInput();
		if(countTime.count() >= 100)
		{
			Cobra.Mov();
			countI = countF;
		}

		EndDrawing();
	}
	CloseWindow();

}
