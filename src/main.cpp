#include<iostream>
#include "Piece.h"

using namespace std;

int main(){
	cout << "Testing..." << endl;
	
	Piece pawn1;
	pawn1.setMName("pawn");
	
	cout << "_______________________" << endl;
	cout<< pawn1.getMName() << endl;
}