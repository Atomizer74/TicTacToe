#include "Player.h"

namespace TicTacToe
{

	Player::Player(std::string name, Piece piece) : _name(name), _piece(piece)
	{
	}

	Player::~Player()
	{
	}


	Piece Player::getPiece()
	{
		return _piece;
	}

	std::string Player::getName()
	{
		return _name;
	}

} // namespace TicTacToe