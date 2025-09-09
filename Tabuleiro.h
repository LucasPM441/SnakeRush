#pragma once
#include "vector"
class Tabuleiro
{
private:
	//dimensoes do tabuleiro
	int ResX;
	int ResY;

	//Estado das c�lulas
	std::vector<std::vector<int>> Celulas;

public:
	void InitTab(); //Inicializa o tabuleiro

	void ImprimirTab(); //Exibe o tabuleiro

	std::vector<std::vector<int>> GetCelulas();// � um getter

	Tabuleiro(int LargRes, int AltRes);
};

