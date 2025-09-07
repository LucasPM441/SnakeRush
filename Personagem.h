#pragma once
#include <vector>


class Personagem
{
private:
	struct Pos
	{
		int PosX, PosY;
	};

	std::vector<Pos> Snake = { 9, {20, 20} };
	int Dir;
	int DirAnt;

public:
	void Mov();
	void MovInput();
	void AtlzSnake();

	Personagem(std::vector<std::vector<int>> DimTab);
	
		 
	
};

