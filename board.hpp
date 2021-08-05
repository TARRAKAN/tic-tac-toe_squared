class Board
{
private:
	enum XOS {Empty = 0, X = 1, O = 2};
	int XOS[3][3];
public:
	bool setX(int x, int y);
	bool setY(int x, int y);
	bool boardIsFull();

};
