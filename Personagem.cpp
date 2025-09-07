#include "Personagem.h"
#include <raylib.h>
#include <iostream>
//Atualiza as posições dos segmentos da cobra internamente.
void Personagem::Mov()
{
	if (Dir == KEY_W) 
	{
		for (int i = Snake.size() - 1; i > 0; i--)
		{
			
			Snake[i] = Snake[i - 1];
		}

		Snake[0].PosY -= 10;
		DirAnt = KEY_W;
	}
	else if(Dir == KEY_A)
	{
		for (int i = Snake.size() - 1; i > 0; i--)
		{
			Snake[i] = Snake[i - 1];
		}
		Snake[0].PosX -= 10;
		DirAnt = KEY_A;
	}
	else if (Dir == KEY_S)
	{
		for (int i = Snake.size() - 1; i > 0; i--)
		{
			Snake[i] = Snake[i - 1];
		}
		Snake[0].PosY += 10;
		DirAnt = KEY_S;
	}
	else if (Dir == KEY_D)
	{
		for (int i = Snake.size() - 1; i > 0; i--)
		{
			Snake[i] = Snake[i - 1];
		}
		Snake[0].PosX += 10;
		DirAnt = KEY_D;
	}
}

//Captura e armazena a direção desejada pelo jogador
void Personagem::MovInput()
{
	if (IsKeyPressed(KEY_W) && DirAnt != KEY_S) Dir = KEY_W;
	else if (IsKeyPressed(KEY_S) && DirAnt != KEY_W) Dir = KEY_S;
	else if (IsKeyPressed(KEY_A) && DirAnt != KEY_D) Dir = KEY_A;
	else if (IsKeyPressed(KEY_D) && DirAnt != KEY_A) Dir = KEY_D;
}

//Atualiza as posições dos segmentos da cobra visualmete.
void Personagem::AtlzSnake()
{
	for (int i = 1; i < Snake.size(); i++)
	{
		DrawRectangle(Snake[i].PosX, Snake[i].PosY, 10, 10, BLACK);
	}
	DrawRectangle(Snake[0].PosX, Snake[0].PosY, 10, 10, WHITE);
}

Personagem::Personagem(std::vector<std::vector<int>> DimTab)
{
	Dir = KEY_S;
	DirAnt = 0;
}

