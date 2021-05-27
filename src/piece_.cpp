#include <iostream>
#include <string>
#include "piece_.h"

using namespace std;

void piecetype::setColor(const string& color){
	mColor = color;
}
const string piecetype::getColor()const{
	return mColor;
}

void piecetype::setPos(int X, int Y){
	mPos[0] = X;
	mPos[1] = Y;
}
const int piecetype::getPos()const{
	return mPos[1];
}

void piecetype::dead(){
	mAlive = false;
}

bool piecetype::isAlive(){
	return mAlive;
}

