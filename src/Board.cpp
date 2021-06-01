#include <iostream>
#include <string>
#include <array>
#include "Board.h"

using namespace std;

void Board::setMakeBoardArr(size_t x, size_t y){
	int** mBoardArr = new int* [x];
	for(int i=0;i<y;i++){
		mBoardArr[i] = new int [y];
	}
}
int** Board::getMakeBoardArr(){
	return mBoardArr;
}

void Board::getDeleteBoardArr(size_t x,size_t y){
	for(int i=0;i<y;i++){
		delete [] mBoardArr[i];
	}
	delete [] mBoardArr;
}
int** Board::getDeleteBoardArr(){
	return mBoardArr;
}
