#include<iostream>
#include <array>
#include "Piece.h"
#include "Board.h"
#include "Chess.h"

using namespace std;

int main(){
	cout <<"Piece...."<< endl;
	Piece piece1("pawn", "white", 1,1);
	cout << piece1.getMName() << endl;
	cout << piece1.getMColor() << endl;
	piece1.setMPosArr();
	cout << piece1.getMPosArr()[0] << ","
		 << piece1.getMPosArr()[1] << endl;
	if(piece1.isAlive()==1){cout << "Alive" << endl;}
	else if (piece1.isAlive()==0){cout << "Dead" << endl;}
	
	
	cout <<"Board...."<< endl;
	Board board1(8,8);
	board1.boardview();
	board1.~Board();
}