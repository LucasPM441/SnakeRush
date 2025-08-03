#pragma once
class GameControl
{
private:
	int ResLarg = 96;
	int ResAlt = 52;

public:
	void FluxoGame();
	GameControl()
	{
		FluxoGame();
	}
};

