#pragma once
#include <iostream>
#include <string>
#include <array>

class Board{
	public:

		void setMakeBoardArr();
		int** getMakeBoardArr();
		void setDeleteBoardArr();
		int** getDeleteBoardArr();
		void view();
		int setX();
		int setY();
	
	private:
		int** mBoardArr;
		int x = setX();
		int y = setY();
		int x1=0;
		int y1=0;
};
