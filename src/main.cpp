#include<iostream>
#include <array>
#include "Piece.h"
#include "Board.h"

using namespace std;

int main(){
	cout << "Testing Piece..." << endl;
	
	Piece pawn1;
	pawn1.setMName("pawn");
	pawn1.setMColor("white");
	pawn1.setMPosArr(2,3);
	cout << "-----------------------" << endl;
	
	cout << pawn1.getMColor() << " " <<pawn1.getMName() << " at " << pawn1.getMPosArr()[0] << ", " << pawn1.getMPosArr()[1] << endl;
	cout << "alive = 1, dead = 0:	" << pawn1.isAlive() << endl;
	cout << "-----------------------" << endl;
	
	pawn1.dead();
	cout << "	now dead" << endl;
	cout << "-----------------------" << endl;
	
	cout << pawn1.getMColor() << " " <<pawn1.getMName() << " at " << pawn1.getMPosArr()[0] << ", " << pawn1.getMPosArr()[1] << endl;
	cout << "alive = 1, dead = 0:	" << pawn1.isAlive() << endl;
	cout << "-----------------------" << endl;
	
	cout << "Testing board..." << endl;
	Board chessboard;
	chessboard.setMakeBoardArr(8,8);
	cout << "-----------------------" << endl;
	cout << chessboard.getMakeBoardArr() << endl;
	cout << "-----------------------" << endl;
	chessboard.getDeleteBoardArr(8);
	cout << "-----------------------" << endl;
}