#pragma once
#include <vector>


class Personagem
{
private:

	// Vetor com as posi��es de cada segmento da cobra
	struct Pos
	{
		int PosX, PosY;
	};
	std::vector<Pos> Snake = { 9, {20, 20} }; 

	int Dir; // Dire��o atual da cobra
	int DirAnt; // Dire��o anterior, usada para bloquear movimentos inversos
	
	std::vector<std::vector<int>> Tabb; //C�pia do tabuleiro do jogo, usada para verifica��es

public:
	
	//responsavel por atualizar a posi��o do jogador
	void Mov();
	void MovInput();
	void AtlzSnake();

	Personagem(std::vector<std::vector<int>> DimTab);
	
		 
	
};

