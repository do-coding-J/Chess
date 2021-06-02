#include <iostream>
#include <string>
#include <array>

class Board{
	public:
		void setMakeBoardArr(size_t x, size_t y);
		int** getMakeBoardArr();
		void getDeleteBoardArr(size_t y);
		int** getDeleteBoardArr();
	private:
		int** mBoardArr;
};

// 크기 구해서 main에 프린트 해보기