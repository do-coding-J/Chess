#include <iostream>
#include <string>
#include <array>

class Board{
	public:
		void setMMakeBoard(size_t x, size_t y);
		int getMMakeBoard();
		void Draw();
	private:
		int mMakeBoardArr;
};