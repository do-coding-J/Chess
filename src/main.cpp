#include<iostream>
#include "piece_.h"

int main(){
<<<<<<< master
=======
<<<<<<< HEAD
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

=======
>>>>>>> local
	cout << "Testing..." << endl;
	
	piecetype pawn1("pawn","white",(0,0));
//	pawn1.setColor("white");
//	pawn1.setPos(1,2);
//	pawn1.dead();
	
	cout << pawn1.getMName() << " " << pawn1.getMColor() << endl;
	cout << pawn1.getMPosArr() << endl;
	cout << pawn1.isAlive() << endl;
	
	cout << "_______________________" << endl;
	cout << "기대값: pawn white, (1,2), 0" << endl;
<<<<<<< master
=======
>>>>>>> master
>>>>>>> local
}