#ifndef PIECE_H
#define PIECE_H

namespace TicTacToe
{
	/* Piece Class
	 * Reason for this is it might be nice to extend pieces beyond X and O, that would happen here
	 *
	 * Threading:
	 * Since the value will not change throughout its lifetime, this should be thread safe and is fine to be copied, but not moved
	 *
	 * COPYABLE, MOVABLE, READONLY, THREAD-SAFE
	 */
	class Piece
	{
		char _value;

	public:
		Piece() : _value(' ') {}
		Piece(char value) : _value(value) {}
		~Piece() {}

		// Copy Constructor
		Piece(const Piece& ref) : _value(ref._value) {}
		// Move Constructor
		Piece(Piece&& rhs) : _value(rhs._value) {}

		const char Value() const { return _value; }

		// Operator Overloads
		bool operator==(const Piece& rhs) const { return (_value == rhs._value); }
		Piece& operator=(const Piece& rhs) { _value = rhs._value; return *this; }

	private:
		
		
	};


} // namespace TicTacToe


#endif // PIECE_H