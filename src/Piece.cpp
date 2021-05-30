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

void Piece::setMPos(size_t xpos, size_t ypos){
	Pos[0] = xpos;
	Pos[1] = ypos;
}
