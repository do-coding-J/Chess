#include<iostream>
#include <array>
#include "Piece.h"
#include "Board.h"
#include "Chess.h"

using namespace std;

int main(){
	/*
	bool game = 0;
	string play = "start";
	cout << "Testing" << endl
		 << "type start to play" <<endl;
	cin >> play;
	if (play == "start"){cout << "play selected" << endl;
						 game =1;}
	Board chessboard;
	chessboard.setMakeBoardArr();
	while(game){
		cout << "type stop to end" <<endl;
		cin >> play;
		if(play == "stop"){cout << "stop selected" << endl;
						   break;}
	}
	*/
		//Piece
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

}