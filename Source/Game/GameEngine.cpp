#include "GameEngine.h"

#include <iostream>
using std::cout;
using std::endl;

namespace TicTacToe
{


	void GameEngine::Run()
	{
		// 1. Get User Input
		// 2. Update game logic
		// 3. Render
		_playerList.push_back(Player("Human", Piece('X')));
		_playerList.push_back(Player("Computer", Piece('O')));

		_current = &_playerList[0];
		_gameBoard.SetPieceAt(1,1, _current->getPiece());
		_current = &_playerList[1];
		_gameBoard.SetPieceAt(2,2, _current->getPiece());
		_current = &_playerList[0];
		_gameBoard.SetPieceAt(3,3, _current->getPiece());
		_current = &_playerList[1];

		auto boardState = _gameBoard.GetBoardState();
		Render(boardState);
	}


	void GameEngine::Render(std::array<Piece, BOARD_SIZE> boardState)
	{
		cout << "7       8       9" << endl << endl;
		for (int y = 0; y < BOARD_HEIGHT; y++)
		{
			if (y == 1)
				cout << "4  ";
			else
				cout << "   ";

			for (int x = 0; x < BOARD_WIDTH; x++)
			{
				cout << " " << boardState[(y * BOARD_WIDTH) + x].Value() << " ";

				if (x != 2)
					cout << "|";
			}
			if (y == 1)
				cout << "  6";
			else
				cout << "   ";
			cout << endl;

			if (y != 2)
				cout << "   ---+---+---   " << endl;
		}
		cout << endl << "1       2       3" << endl;

		
		// Print players list and piece, also note whose turn it is
		cout << endl;
		for (unsigned int i = 0; i < _playerList.size(); i++)
		{
			cout << i << ". " << _playerList[i].getName() << "\t" << _playerList[i].getPiece().Value();

			if (&_playerList[i] == _current)
				cout << " <-- YOUR TURN!";
			cout << endl;
		}
	}


} // namespace TicTacToe