#include <iostream>
#include <string>
#include <array>
#include "Piece.h"

using namespace std;

Piece::Piece(){
	cout << "wrong declaration" << endl;
}
Piece::Piece(const std::string& name, const std::string& color, int posX, int posY):mName(name),mColor(color),mPosX(posX), mPosY(posY){
}

Piece::~Piece()
{
}

string& Piece::getMName(){
	return mName;
}

string& Piece::getMColor(){
	return mColor;
}

void Piece::dead(){
	mAlive = 0;
}
bool Piece::isAlive(){
	return mAlive;
}

void Piece::setMPosArr(){
	mPosArr[0] = mPosX;
	mPosArr[1] = mPosY;
}

int* Piece::getMPosArr(){
	return mPosArr;
}