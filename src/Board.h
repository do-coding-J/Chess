#include <iostream>
#include <string>
#include <array>

class Board{
	public:
		void setMakeBoardArr();
		int** getMakeBoardArr();
	//	void getDeleteBoardArr(size_t y);
	//	int** getDeleteBoardArr();
		int setX();
		int setY();
	
	private:
		int** mBoardArr;
		int x= setX();
		int y= setY();
};

// 크기 구해서 main에 프린트 해보기