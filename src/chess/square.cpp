#include <chess/square.hpp>


Square::Square(const Position& position, Piece* const piece) noexcept
	: _position(position), _piece(piece)
{}


const Position& Square::position() const noexcept { return _position; }
Piece* Square::piece() const noexcept { return _piece; }

void Square::setPosition(const Position& position) noexcept { _position = position; }
void Square::setPiece(Piece* const piece) noexcept { _piece = piece; }
