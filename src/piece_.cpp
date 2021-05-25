#include <iostream>
#include <string>
#include "piece_.h"

using namespace std;

void piecetype::setColor(std::string& Color){
	mColor = Color
}
const string& piecetype::getColor(){
	return mColor;
}

void piecetype::setLocation(size_t setPos[2]){
	mPos[2] = setPos[2];
}
const size_t piecetype::getPos(){
	return mPos;
}

void piecetype::dead(){
	mAlive = 0;
}

