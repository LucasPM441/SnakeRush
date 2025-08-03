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
	Tabuleiro(int LargRes, int AltRes);
};

