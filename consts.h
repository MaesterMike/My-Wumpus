#pragma once

enum STATE {INIT, MAIN, PLAY, GAME, EXIT};

STATE mainMenu();

void splash();

void closeWin();

int getNumValid(int min, int max);
