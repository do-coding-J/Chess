#include<iostream>
#include "piece_.h"

int main(){
	cout << "Testing..." << endl;
	
	piecetype pawn1;
	pawn1.setColor("white");
	pawn1.setPos(1,2);
	pawn1.dead();
	
	cout << pawn1.getColor() << endl;
	cout << pawn1.getPos() << endl;
	cout << pawn1.isAlive() << endl;
	
	cout << "_______________________" << endl;
	cout << "기대값: white, (1,2), 0" << endl;
}