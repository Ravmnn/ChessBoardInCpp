#include <board.h>

#include <iostream>
#include <cstddef>


Board::Board(){}


void Board::initialize() noexcept
{
    const char layout[8][9] = {
    "rnbqkbnr",
    "pppppppp",
    "        ",
    "        ",
    "        ",
    "        ",
    "PPPPPPPP",
    "RNBQKBNR"
    };

    for (size_t i = 0; i < 8; i++)
        for (size_t j = 0; j < 8; j++)
            _squares[i][j] = layout[i][j];
}


void Board::print() const noexcept
{
    std::cout << "  A B C D E F G H" << std::endl;

    for (int i = 0; i < 8; i++)
    {
        std::cout << 8 - i << " ";

        for (int j = 0; j < 8; j++)
        {
            const char piece = _squares[i][j];
            const std::string fundo = ((i+j) % 2 == 0) ? "47" : "42";

            if (std::islower(piece))
                std::cout << "\033[30;" << fundo << "m" << piece << " \033[0m";
            else
                std::cout << "\033[37;" << fundo << "m" << piece << " \033[0m";

        }

        std::cout << std::endl;
    }
}
