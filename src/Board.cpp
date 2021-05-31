#include <iostream>
#include <string>
#include <array>
#include "Board.h"


void Board::setMMakeBoard(size_t x, size_t y){
	int** mMakeBoardArr = new int* [x]; //mDrawBoardArr에 주소로 된 x 만큼 배열을 만들고
	for(int i = 0; i < y; i++){			//x행에 y열을 추가
		mMakeBoardArr[i] = new int [y]; 
	}
}

int Board::getMMakeBoard(){
	return mMakeBoardArr;
}

void Board::Draw(){
	int col = sizeof(*mMakeBoardArr[0])/sizeof(int);
	int row = sizeof(*mMakeBoardArr)/sizeof(*mMakeBoardArr[0]);
	
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			std::cout << mMakeBoardArr[i][j];
		}
		std::cout << endl;
	}
}