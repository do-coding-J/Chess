#include <iostream>
#include <string>
#include "piece_.h"

using namespace std;

void piecetype::setColor(const string& color) {
	mColor = color;
}
string piecetype::getColor() {
	return mColor;
}

void piecetype::setPos(int X, int Y) {
	mPos[0] = X;
	mPos[1] = Y;
}
int piecetype::getPos() {
	return mPos[1];
}

void piecetype::dead(){
	mAlive = false;
}

bool piecetype::isAlive(){
	return mAlive;
}

