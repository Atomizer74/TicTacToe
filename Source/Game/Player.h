#ifndef PLAYER_H
#define PLAYER_H


#include "Piece.h"

namespace TicTacToe
{

	// Class Reliance
	class Board;
	class Piece;

	/* Player Class
	 * The base player class, should not be instanced itself, but instead use the inherited classes: PlayerLocal, PlayerComputer, PlayerRemote
	 *
	 * Threading:
	 * This object should be made thread safe via a mutex lock
	 *
	 * THREAD-SAFE
	 */
	class Player
	{
		Piece _piece;

	public:
		Player(Piece piece);
		virtual ~Player();

		// Player(piece(X/O))
		// determineMove

		Piece getPiece();

	private:
		// Copy Constructor - We do not want copies of this made
		Player(const Player& ref) {}

		// Move Constructor - Might change, but for now we dont want it movable
		Player(Player&& rhs) {}
	};

} // namespace TicTacToe


#endif // PLAYER_H