#include<iostream>
#include "Piece.h"

using namespace std;

int main(){
	cout << "Testing..." << endl;
	
	Piece pawn1;
	pawn1.setMName("pawn");
	pawn1.setMColor("white");
	pawn1.setMPos(1,1);
	cout << "-----------------------" << endl;
	
	cout << pawn1.getMColor() << " " <<pawn1.getMName() << endl;
	cout << "position X: " << pawn1.Pos[0] << "  and Y: "<< pawn1.Pos[1] << endl;
	cout << "alive = 1, dead = 0:	" << pawn1.isAlive() << endl;
	cout << "-----------------------" << endl;
	
	pawn1.dead();
	cout << "now dead" << endl;
	cout << "-----------------------" << endl;
	
	cout << pawn1.getMColor() << " " <<pawn1.getMName() << endl;
	cout << "1: alive	0: dead \n" << pawn1.isAlive() << endl;
	cout << "-----------------------" << endl;
}

// 포인터, 배열 기물이 움직일 수 있는 좌표, 움직임 