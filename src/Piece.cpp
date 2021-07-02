#include "Piece.h"

using namespace std;

Piece::Piece(){
	mName;
	mColor;
	mInitial;
}

Piece::~Piece(){}

void Piece::setPiece(string n, string c){
	mName = n;
	if(c == "white"){mColor = false;}
	else if(c == "black"){mColor = true;}
	
	if(n == "Pawn") {
		if(mColor == false) mInitial ='p';
		else if(mColor == true) mInitial='P';}
	else if(n == "Knight") {
		if(mColor == false) mInitial='n';
		else if(mColor == true) mInitial='N';}
	else if(n == "Bishop") {
		if(mColor == false) mInitial='b';
		else if(mColor == true) mInitial='B';}
	else if(n == "Rook") {
		if(mColor == false) mInitial='r';
		else if(mColor == true) mInitial='R';}
	else if(n == "Queen") {
		if(mColor == false) mInitial='q';
		else if(mColor == true) mInitial='Q';}
	else if(n == "King") {
		if(mColor == false) mInitial='k';
		else if(mColor == true) mInitial='K';}
}

void Piece::setMName(){
	cout << "Piece Name : ";
	cin >> mName;
}
void Piece::setMName(string name){
	mName = name;
}
string Piece::getMName(){
	return mName;
}

void Piece::setMColor(string color){
	if(color == "white"){mColor = false;}
	else if(color == "black"){mColor = true;}
}
bool Piece::getMColor(){
	return mColor;
}
		
char Piece::getMInitial(){
	return mInitial;
}