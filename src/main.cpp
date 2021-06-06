#include<iostream>
#include <array>
#include "Piece.h"
#include "Board.h"
#include "Chess.h"

using namespace std;

int main(){
	Piece piece1("pawn", "white", 1,1);
	cout << piece1.getMName() << endl;
}