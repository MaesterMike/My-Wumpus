#include <iostream>
#include <malloc.h>
#include "consts.h"
#include "GameState.h"

int main()
{
	GameState g;
	STATE current = INIT;

	while (true)
	{
		switch (current)
		{
		case INIT: splash();
		case MAIN: current = mainMenu(); break;
		case PLAY: g.play();
		case GAME: current = g.update(); break;
		case EXIT: closeWin(); return 0;
		}
	}
}