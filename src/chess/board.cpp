#include <chess/board.hpp>


Board::Board() noexcept
{
	_squares = generateDefaultSquareMatrix();
}


SquareMatrix Board::generateDefaultSquareMatrix() noexcept
{
	SquareMatrix matrix(8);

	for (unsigned int i = 0; i < 8; i++)
		for (unsigned int o = 0; o < 8; o++)
			matrix[i].push_back(Square({i, o}, nullptr));

	return matrix;
}
