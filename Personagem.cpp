#include "Personagem.h"
#include <raylib.h>
#include <iostream>

Personagem::Personagem(std::vector<std::vector<int>> DimTab)
{
	Dir = KEY_D;
	DirAnt = 0;
	Tabb = DimTab;
}

//Atualiza as posi��es dos segmentos da cobra internamente.
void Personagem::Mov()
{
	static bool MovPermission = true;

	if (MovPermission == true)
	{
		// Atualiza posi��es do corpo, da cauda at� a cabe�a
		for (int i = Snake.size() - 1; i > 0; i--)
		{

			Snake[i] = Snake[i - 1];
		}

		// Atualiza a posi��o da cabe�a da cobra de acordo com a dire��o do input do jogador
		if (Dir == KEY_W)
		{
			Snake[0].PosY -= 10;
			DirAnt = KEY_W;
		}
		else if (Dir == KEY_A)
		{
			Snake[0].PosX -= 10;
			DirAnt = KEY_A;
		}
		else if (Dir == KEY_S)
		{
			Snake[0].PosY += 10;
			DirAnt = KEY_S;
		}
		else if (Dir == KEY_D)
		{
			Snake[0].PosX += 10;
			DirAnt = KEY_D;
		}else{}

		//verifica se houve colis�o com as bordas
		if (Tabb[Snake[0].PosX / 10][Snake[0].PosY / 10] == 3)
		{
			MovPermission = false;

		}else {}

		//verifica se houve colis�o com o seu corpo
		for (int i = 1; i < Snake.size(); i++)
		{
			if (Snake[0].PosX == Snake[i].PosX && Snake[0].PosY == Snake[i].PosY)
			{
				MovPermission = false;
				break;
			}
		}

	}
}

//Captura e armazena a dire��o desejada pelo jogador
void Personagem::MovInput()
{
	if (IsKeyPressed(KEY_W) && DirAnt != KEY_S) Dir = KEY_W;
	else if (IsKeyPressed(KEY_S) && DirAnt != KEY_W) Dir = KEY_S;
	else if (IsKeyPressed(KEY_A) && DirAnt != KEY_D) Dir = KEY_A;
	else if (IsKeyPressed(KEY_D) && DirAnt != KEY_A) Dir = KEY_D;
}

//Atualiza as posi��es dos segmentos da cobra visualmete.
void Personagem::AtlzSnake()
{
	//desenha o corpo
	for (int i = 1; i < Snake.size(); i++)
	{
		DrawRectangle(Snake[i].PosX, Snake[i].PosY, 10, 10, BLACK);
	}
	//desenha a cabe�a
	DrawRectangle(Snake[0].PosX, Snake[0].PosY, 10, 10, PURPLE);
}