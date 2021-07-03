#include <iostream>
#include <vector>
#include "Game.h"

using namespace std;


int main(){
	int x1,y1,x2,y2;
	int turn=1;
	Game board;
	board.makeMBoardArr(9,9);
	board.initMBoardArr();
		
	while(true){
//		system("clear");
		if(turn > 1){
			for(int i = 1; i<turn;i++){
				if (i%2==1){cout << "white's move";}
				else if (i%2==0){cout << "black's move";}
				
				cout << " : " << board.getLog()[(turn-2)*4] << ", " << board.getLog()[((turn-2)*4)+1] << " -> " << board.getLog()[((turn-2)*4)+2] << ", " << board.getLog()[((turn-2)*4)+3] << endl;
			}
		}
		
		if (turn%2==1){cout << "white's turn \n";}
		else if (turn%2==0){cout << "black's turn \n";}
		
		if(turn%2==1){board.boardview();}
		else if(turn%2==0){board.boardviewRev();}
		
		cout << "From X Y : "; cin >> x1 >> y1;
		board.setFrom(x1, y1);
		board.calcmoves();
		
		cout << board.getMoves().size() << endl;
		
		for(int i= 0; i< board.getMoves().size();i++){
			cout << board.getMoves()[i] << " ";
			if(i%2==1){cout << "\n";}
		}
//		cout << "To   X Y : "; cin >> x2 >> y2;
//		board.setPoB(x1,y1,x2,y2);
//		board.setLog(x1,y1,x2,y2);
		
//		turn++;
	}

}