#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include "Board.h"
#include "Player.h"

#include <array>
#include <vector>

namespace TicTacToe
{

	class GameEngine
	{
		Board _gameBoard;
		std::vector<Player> _playerList;
		Player* _current;

	public:
		GameEngine() : _current(nullptr) {}
		~GameEngine() {}

		void Run();
		void Render(std::array<Piece, BOARD_SIZE> boardState);
	};


} // namespace TicTacToe

#endif // GAMEENGINE_H