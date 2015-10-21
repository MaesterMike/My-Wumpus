#pragma once
#include "consts.h"

class GameState
{
	int roomToEnter;

public:
	void play();
	STATE update();
};