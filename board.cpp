#include "board.hpp"
#include <algorithm>

#include <iostream>

Board::Board()
{
    for(size_t i{0}; i < 3; i++)
        for(size_t j{0}; j < 3; j++)
            board[i][j] = Symbols::Empty;
}

bool Board::setSymbol(int x, int y, Symbols symbol)
{
    for(size_t i{0}; i < 3; i++)
    {
        for(size_t j{0}; j < 3; j++)
        {
            std::cout << board[i][j] << " ";
        }
        std::cout << "\n";
    }
    
    if(std::max(x, y) > 3 || std::min(x, y) < 1)
        return false;
    
    if(board[x-1][y-1] == Symbols::Empty)
    {
        board[x-1][y-1] = symbol;
        std::cout << "true\n";
        return true;
    }
    else return false;
}
