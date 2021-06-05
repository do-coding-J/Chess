#include <iostream>
#include <string>
#include <array>
#include "Piece.h"

using namespace std;

void Piece::setMName(const string& name){
	mName = name;
}
string& Piece::getMName(){
	return mName;
}

void Piece::setMColor(const string& color){
	mColor = color;
}
string& Piece::getMColor(){
	return mColor;
}

bool Piece::isAlive(){
	return mAlive;
}
void Piece::dead(){
	mAlive = 0;
}

void Piece::setMPosArr(int xpos, int ypos){
	mPosArr[0] = xpos;
	mPosArr[1] = ypos;
}

int* Piece::getMPosArr(){
	return mPosArr;
}