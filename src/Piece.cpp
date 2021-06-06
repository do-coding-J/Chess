#include <iostream>
#include <string>
#include <array>
#include "Piece.h"

using namespace std;

<<<<<<< HEAD
<<<<<<< master
=======
<<<<<<< HEAD
=======
>>>>>>> local
Piece::Piece(const string& name, const string& color, array<int,2> posArr):mName(name),mColor(color),mPosArr[2](array<int,2> posArr)
{
}

<<<<<<< master
=======
>>>>>>> master
>>>>>>> local
=======
>>>>>>> feature/piece
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