#include <iostream>
#include <string>
#include <array>

class Board{
	public:
		void setMakeBoardArr(size_t x, size_t y);
		int** getMakeBoardArr();
		void getDeleteBoardArr(size_t x, size_t y);
		int** getDeleteBoardArr();
		void setMColsize();
		int getMColsize();
		void setMRowsize();
		int getMRowsize();
	private:
		int** mBoardArr;
		int mRowSize;
		int mColSize;
};

// 크기 구해서 main에 프린트 해보기