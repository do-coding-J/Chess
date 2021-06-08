#include <iostream>
#include <string>
#include <array>
#include "Board.h"


using namespace std;

Board::Board(){
}
Board::Board(int x, int y):col(x), row(y){
	mBoardArr = new char* [col];
	for(int i=0;i<col;i++){
		mBoardArr[i] = new char[row];
		for(int j=0;j<row;j++){
			mBoardArr[i][j] = {'o'};
		}
	}
}

Board::~Board(){
	for(int i=0;i<col;i++){
		delete [] mBoardArr[i];
	}
	delete [] mBoardArr;
}

char** Board::getMBoardArr(){
	return mBoardArr;
}

void Board::boardview(){
	for(int i=0;i<col;i++){
		for(int j=0;j<row;j++){	
			cout << mBoardArr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}