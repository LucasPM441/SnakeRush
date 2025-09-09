#include "Tabuleiro.h"
#include "vector"
#include "raylib.h"
#include <random>
#include <iostream>

//resposavel por se informar qual será o tamanho do tabuleiro
Tabuleiro::Tabuleiro(int LargRes, int AltRes)
{
	ResX = LargRes;
	ResY = AltRes;
}

//resposanvel por construir o tabuleiro
void Tabuleiro::InitTab()
{
	Celulas = std::vector<std::vector<int>>(ResX, std::vector<int>(ResY, 1));

	//geração do padrão do tabuleiro
	for (int i = 0; i < ResX; i++)
	{
		for (int j = 0; j < ResY; j++)
		{
			Celulas[i][j] = (i + j) % 2;
		}
	}

	//geração das bordas
	for (int i = 0; i < ResX; i++)
	{
		Celulas[i][0] = 3;
		Celulas[i][ResY - 1] = 3;

		for (int j = 0; j < ResY; j++)
		{
			Celulas[0][j] = 3;
			Celulas[ResX - 1][j] = 3;
		}
	}
}

//responsavel por atualizar/imprimir o tabuleiro
void Tabuleiro::ImprimirTab()
{
	for (int i = 0; i < ResX; i++)
	{
		for (int j = 0; j < ResY; j++)
		{
			if (Celulas[i][j] == 1)
			{
				DrawRectangle(i * 10, j * 10, 10, 10, DARKGREEN);
			}
			else if (Celulas[i][j] == 3) 
			{
				DrawRectangle(i * 10, j * 10, 10, 10, RED);

			}else{}
		}
	}
}

//é um getter.
std::vector<std::vector<int>> Tabuleiro::GetCelulas()
{
	return Celulas;
}


