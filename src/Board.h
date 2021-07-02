#pragma once
#include "Piece.h"


class Board: public Piece {
	public:
		Board();
		~Board();
		
		void makeMBoardArr(int x, int y);
	
		void initMBoardArr();
		
		char** getMBoardArr();
	
		void boardview();
		void boardviewRev();
	
	private:
		int col; //x
		int row; //y
		char** mBoardArr;
	protected:
		Piece piece[32];
};