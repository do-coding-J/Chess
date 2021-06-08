#pragma once
#include <iostream>
#include <string>
#include <array>

class Board{
	public:
		Board();
		Board(int x, int y);
		~Board();
	
		char** getMBoardArr();
	
		void boardview();
		
	private:
		int col; //x
		int row; //y
		char** mBoardArr;
};