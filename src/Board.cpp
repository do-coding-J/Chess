#include <iostream>
#include <string>
#include <array>
#include "Board.h"

using namespace std;

void Board::setMakeBoardArr(){
	mBoardArr = new int* [x];
	for(int i=0;i<x;i++) 
		mBoardArr[i] = new int[y];
}
int** Board::getMakeBoardArr(){
	return mBoardArr;
}

void Board::setDeleteBoardArr(){
	for(int i=0;i<x;i++){
		delete [] mBoardArr[i];
	}
	delete [] mBoardArr;
}
int** Board::getDeleteBoardArr(){
	return mBoardArr;
}


int Board::setX(){
	cout << "x : ";
	cin >> x1;
	int* x = &x1;
	return *x;
}

int Board::setY(){
	cout << "y : ";
	cin >> y1;
	int* y = &y1;
	return *y;
}


void Board::view(){
	//draw
	for(int i=0;i<x;i++){
		for(int j=0;j<x;j++){	
			cout << mBoardArr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	//reference
	cout << "mBoardArr : " << mBoardArr << endl;
	cout << "mBoardArr[0] : " << mBoardArr[0] << endl;
	cout << "mBoardArr[0][0] : " << mBoardArr[0][0] <<endl;
}