#ifndef BOARD_H
#define BOARD_H

#include "Piece.h"
#include "Player.h"

#include <array>

namespace TicTacToe
{
	const unsigned int BOARD_WIDTH = 3;
	const unsigned int BOARD_HEIGHT = 3;
	const unsigned int BOARD_SIZE = BOARD_WIDTH * BOARD_HEIGHT;

	// Class Reliance
	class Player;
	class Piece;

	/* Board Class
	 * Handles the boards state, purely a mechanics class
	 *
	 * Threading:
	 * This object should be made thread safe via a mutex lock
	 *
	 * THREAD-SAFE
	 */
	class Board
	{
		std::array<Piece, BOARD_SIZE> _boardState;

	public:
		
		// checkBoardState
		// setPos ( x, y, player )
		// clear
		// Not doing rendering here, add getBoardState method for our renderer to use

	private:
		// Copy Constructor - We should not be making copies of the board
		Board(const Board& ref) {}
		// Move Constructor - We should not be moving the board around
		Board(Board&& rhs) {}
	};

} // namespace TicTacToe



#endif // BOARD_H