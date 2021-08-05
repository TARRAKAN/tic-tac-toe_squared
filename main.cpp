#include "board.hpp"
int main()
{
    Board b;
    b.setSymbol(1,1,Board::Symbols::X);
    b.setSymbol(1,1,Board::Symbols::O);
    b.setSymbol(2,2,Board::Symbols::O);
    b.setSymbol(2,2,Board::Symbols::O);
	return 0;
}
