#include <iostream>
#include <array>


class Board{
	public:
		void setMGBPosArr(int x, int y);	//GB=GameBoard
		int* getMGBPosArr();
	private:
		int mGameboard[8][8] = {0};
		int mGBPosArr[2] ={0};
};