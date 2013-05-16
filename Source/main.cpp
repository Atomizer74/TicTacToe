#include <iostream>

#include "Game/GameEngine.h"

using std::cout;
using std::endl;

int main(int argc, const char* argv[])
{
	TicTacToe::GameEngine game;
	game.Run();

	return 0;
}