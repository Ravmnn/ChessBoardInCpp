#pragma once


class Board
{
    public:
        Board();

        void initialize() noexcept;
        void print() const noexcept;


    private:
    	char _squares[8][8];
};
