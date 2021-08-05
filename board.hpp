class Board
{
private:
	int board[3][3];
public:
	Board();
	enum Symbols {Empty = 0, X = 1, O = 2};
	bool setSymbol(int x, int y, Symbols symbol);
};
