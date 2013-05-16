#include "Board.h"


namespace TicTacToe
{

	Board::Board()
	{
	}

	Board::~Board()
	{
	}

	void Board::SetPieceAt(int x, int y, Piece piece)
	{
		if (x < 1 || x > BOARD_WIDTH) return;
		if (y < 1 || y > BOARD_HEIGHT) return;

		_boardState[((y-1) * BOARD_WIDTH) + (x-1)] = piece;
	}


	const std::array<Piece, BOARD_SIZE> Board::GetBoardState()
	{
		return _boardState;
	}

} // namespace TicTacToe