#pragma once
class GameControl
{
private:
	//resolu��o do jogo
	int ResLarg = 96;
	int ResAlt = 52;

public:
	void FluxoGame();
	GameControl()
	{
		FluxoGame();
	}
};

