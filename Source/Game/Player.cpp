#include "Player.h"

namespace TicTacToe
{

	Player::Player(Piece piece) : _piece(piece)
	{
	}

	Player::~Player()
	{
	}


	Piece Player::getPiece()
	{
		return _piece;
	}

} // namespace TicTacToe