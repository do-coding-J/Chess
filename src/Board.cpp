#include <iostream>
#include "Board.h"

using namespace std;

Board::Board(){}
Board::~Board(){
	for(int i=0;i<col;i++){
		delete [] mBoardArr[i];
	}
	delete [] mBoardArr;
}

void Board::makeMBoardArr(int x, int y){
	col = x;
	row = y;
	
	mBoardArr = new char* [col];
	for(int i=0;i<col;i++){
		mBoardArr[i] = new char [row];
		for(int j=0;j<row;j++){
			mBoardArr[i][j] = {'.'};
		}
	}
	mBoardArr[0][8] = '1';
	mBoardArr[1][8] = '2';
	mBoardArr[2][8] = '3';
	mBoardArr[3][8] = '4';
	mBoardArr[4][8] = '5';
	mBoardArr[5][8] = '6';
	mBoardArr[6][8] = '7';
	mBoardArr[7][8] = '8';
	mBoardArr[8][0] = '1';
	mBoardArr[8][1] = '2';
	mBoardArr[8][2] = '3';
	mBoardArr[8][3] = '4';
	mBoardArr[8][4] = '5';
	mBoardArr[8][5] = '6';
	mBoardArr[8][6] = '7';
	mBoardArr[8][7] = '8';
	mBoardArr[8][8] = ' ';
}	
	
void Board::initMBoardArr(){
	mBoardArr[1][0] = 'P'; // black
	mBoardArr[1][1] = 'P';
	mBoardArr[1][2] = 'P';
	mBoardArr[1][3] = 'P';
	mBoardArr[1][4] = 'P';
	mBoardArr[1][5] = 'P';
	mBoardArr[1][6] = 'P';
	mBoardArr[1][7] = 'P'; 
	mBoardArr[0][0] = 'R'; 
	mBoardArr[0][1] = 'N';
	mBoardArr[0][2] = 'B';
	mBoardArr[0][3] = 'Q';
	mBoardArr[0][4] = 'K';
	mBoardArr[0][5] = 'B';
	mBoardArr[0][6] = 'N';
	mBoardArr[0][7] = 'R';
	
	mBoardArr[6][0] = 'p'; // white
	mBoardArr[6][1] = 'p';
	mBoardArr[6][2] = 'p';
	mBoardArr[6][3] = 'p';
	mBoardArr[6][4] = 'p';
	mBoardArr[6][5] = 'p';
	mBoardArr[6][6] = 'p';
	mBoardArr[6][7] = 'p'; 
	mBoardArr[7][0] = 'r'; 
	mBoardArr[7][1] = 'n';
	mBoardArr[7][2] = 'b';
	mBoardArr[7][3] = 'q';
	mBoardArr[7][4] = 'k';
	mBoardArr[7][5] = 'b';
	mBoardArr[7][6] = 'n';
	mBoardArr[7][7] = 'r';
	
	mBoardArr[2][4] = 'B';  // test
}
	
char** Board::getMBoardArr(){
	return mBoardArr;
}
	
void Board::boardview(){
	for(int i=0;i<col;i++){
		for(int j=0;j<row;j++){	
			cout << mBoardArr[i][j] <<" ";
		} cout << endl;
	} cout << endl;
}
void Board::boardviewRev(){
	for(int i = col-1 ; i>=0; i--){
		for(int j = row-1; j>=0; j--){
			cout << mBoardArr[i][j] <<" ";
		} cout << endl;
	} cout << endl;
}
