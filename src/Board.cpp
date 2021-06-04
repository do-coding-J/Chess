#include <iostream>
#include <string>
#include <array>
#include "Board.h"

using namespace std;

void Board::setMakeBoardArr(){
	mBoardArr = new int* [x];
	for(int i=0;i<x;i++){
		mBoardArr[i] = new int [y];
		
	}
	cout << "Array " << x <<" by " << y << endl;
}

int** Board::getMakeBoardArr(){
	return mBoardArr;
}
/*
void Board::getDeleteBoardArr(size_t x){
	for(int i=0;i<x;i++)
		delete [] mBoardArr[i];
	delete [] mBoardArr;
}
/*
int** Board::getDeleteBoardArr(){
	return mBoardArr;
}
*/

int Board::setX(){
	int x1=0;
	cout << "x : ";
	cin >> x1;
	cout << endl;
	int* x = &x1;
	return *x;
}

int Board::setY(){
	int y1=0;
	cout << "y : ";
	cin >> y1;
	cout << endl;
	int* y = &y1;
	return *y;
}