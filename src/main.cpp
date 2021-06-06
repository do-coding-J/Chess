#include<iostream>
#include "piece_.h"

int main(){
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
}