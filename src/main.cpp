#include<iostream>
#include "piece_.h"

int main(){
	cout << "Testing..." << endl;
	
	piecetype pawn;
	pawn.setColor("white");
	pawn.setLocation(1,2);
	pawn.dead();
	
	cout << pawn.getColor << endl;
	cout << pawn.getLocation << endl;
	cout << pawn.mAlive << endl;
	
	cout << "_______________________" << endl;
	cout << "기대값: white, (1,2), 0" <<endl;
}