#include <iostream>
#include <array>
#include "board.h"


void Board::setMGBPosArr(int x, int y){
	mGBPosArr[0]=x;
	mGBPosArr[1]=y;
}
int* Board::getMGBPosArr(){
	return mGBPosArr;
}