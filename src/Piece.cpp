#include <iostream>
#include <string>
#include "Piece.h"

using namespace std;

void Piece::setMName(const string& name){
	mName = name;
}

string& Piece::getMName(){
	return mName;
}