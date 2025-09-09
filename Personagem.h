#pragma once
#include <vector>


class Personagem
{
private:

	// Vetor com as posições de cada segmento da cobra
	struct Pos
	{
		int PosX, PosY;
	};
	std::vector<Pos> Snake = { 9, {20, 20} }; 

	int Dir; // Direção atual da cobra
	int DirAnt; // Direção anterior, usada para bloquear movimentos inversos
	
	std::vector<std::vector<int>> Tabb; //Cópia do tabuleiro do jogo, usada para verificações

public:
	
	//responsavel por atualizar a posição do jogador
	void Mov();
	void MovInput();
	void AtlzSnake();

	Personagem(std::vector<std::vector<int>> DimTab);
	
		 
	
};

