#pragma once
class GameControl
{
private:
	//resolução do jogo
	int ResLarg = 96;
	int ResAlt = 52;

public:
	void FluxoGame();
	GameControl()
	{
		FluxoGame();
	}
};

