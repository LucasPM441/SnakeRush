#pragma once
#include "vector"
class Tabuleiro
{
private:
	int ResX;
	int ResY;

	std::vector<std::vector<int>> Celulas;

public:
	void InitTab();
	void ImprimirTab();
	std::vector<std::vector<int>> GetCelulas();
	Tabuleiro(int LargRes, int AltRes);
};

