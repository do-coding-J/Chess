#include "Game.h"
#include <vector>

using namespace std;

void Game::pieceDeclare(){
	piece[0].setPiece("Pawn", "black");
	piece[1].setPiece("Rook", "black");
	piece[2].setPiece("Knight", "black");
	piece[3].setPiece("Bishop", "black");
	piece[4].setPiece("Queen", "black");
	piece[5].setPiece("King", "black");
	piece[6].setPiece("Pawn", "white");
	piece[7].setPiece("Rook", "white");
	piece[8].setPiece("Knight", "white");
	piece[9].setPiece("Bishop", "white");
	piece[10].setPiece("Queen", "white");
	piece[11].setPiece("King", "white");
}

void Game::setLog(int a, int b, int c, int d){
	Log.push_back(a);
	Log.push_back(b);
	Log.push_back(c);
	Log.push_back(d);
}
	
vector<int> Game::getLog(){
	return Log;
}

void Game::setPoB(int a, int b, int c, int d){ //7, 3, 6, 3,
	x1 = a-1, y1 = b-1, x2 = c-1, y2 = d-1;
	
	temp = getMBoardArr()[x2][y2];
	if(getMBoardArr()[x2][y2] == '.'){
		getMBoardArr()[x2][y2] = getMBoardArr()[x1][y1];
		getMBoardArr()[x1][y1] = temp;
	}
	else {
		getMBoardArr()[x2][y2] = getMBoardArr()[x1][y1];
		getMBoardArr()[x1][y1] = '.';
	}
}

void Game::setFrom(int a, int b){
	x1 = a-1; y1 = b-1;
}
	
void Game::calcmoves(){
	moves.clear();
//	----------------------------------------------------------------------------------------- white pawn 
	if(getMBoardArr()[x1][y1] == 'p'){
		if(x1 == 6){
			if(getMBoardArr()[x1-1][y1] == '.'){moves.push_back(x1-1); moves.push_back(y1);}
			if(getMBoardArr()[x1-2][y1] == '.'){moves.push_back(x1-2); moves.push_back(y1);}
		}
		else {
			if(getMBoardArr()[x1-1][y1] == '.'){moves.push_back(x1-1); moves.push_back(y1);}
		}
		
		if(getMBoardArr()[x1-1][y1-1] != '.'){moves.push_back(x1-1); moves.push_back(y1-1);}
		if(getMBoardArr()[x1-1][y1+1] != '.'){moves.push_back(x1-1); moves.push_back(y1+1);}
		
	}
//	----------------------------------------------------------------------------------------- black pawn 
	
	else if(getMBoardArr()[x1][y1] == 'P'){
		if(x1 == 1){
			if(getMBoardArr()[x1+1][y1] == '.'){moves.push_back(x1+1); moves.push_back(y1);}
			if(getMBoardArr()[x1+2][y1] == '.'){moves.push_back(x1+2); moves.push_back(y1);}
		}
		else {
			if(getMBoardArr()[x1+1][y1] == '.'){moves.push_back(x1+1); moves.push_back(y1);}
		}
		if(getMBoardArr()[x1+1][y1-1] != '.'){moves.push_back(x1+1); moves.push_back(y1-1);}
		if(getMBoardArr()[x1+1][y1+1] != '.'){moves.push_back(x1+1); moves.push_back(y1+1);}
	}
//	----------------------------------------------------------------------------------------- rook 상, 좌로 한칸 더 이동 + 피아 식별
	
	else if(getMBoardArr()[x1][y1] == 'r' || getMBoardArr()[x1][y1] == 'R'){
		for(int i = x1-1; i >= 0; i--){ // 위로 이동
			if(getMBoardArr()[i][y1] != '.'){
				if(getMBoardArr()[x1][y1] == 'r'){
					if(64<getMBoardArr()[i][y1]<91){moves.push_back(i); moves.push_back(y1); break;}
					else if(96<getMBoardArr()[i][y1]<123){break;}
				}
				else if(getMBoardArr()[x1][y1] == 'R'){
					if(96<getMBoardArr()[i][y1]<123){moves.push_back(i); moves.push_back(y1); break;}
					else if(64<getMBoardArr()[i][y1]<91){break;}
				}
			}
			else if(getMBoardArr()[i][y1] == '.'){
				moves.push_back(i); moves.push_back(y1);
			}
		}
			
		for(int i = x1+1; i < 8; i++){ // 아래로 이동
			if(getMBoardArr()[i][y1] != '.'){
				if(getMBoardArr()[x1][y1] == 'r'){
					if(64<getMBoardArr()[i][y1]<91){moves.push_back(i); moves.push_back(y1); break;}
					else if(96<getMBoardArr()[i][y1]<123){break;}
				}
				else if(getMBoardArr()[x1][y1] == 'R'){
					if(96<getMBoardArr()[i][y1]<123){moves.push_back(i); moves.push_back(y1); break;}
					else if(64<getMBoardArr()[i][y1]<91){break;}
				}
			}
			else if(getMBoardArr()[i][y1] == '.'){
				moves.push_back(i); moves.push_back(y1);
			}
		}
		
		for(int i = y1-1; i >= 0; i--){ // 왼쪽으로 이동
			if(getMBoardArr()[x1][i] != '.'){
				if(getMBoardArr()[x1][y1] == 'r'){
					if(64<getMBoardArr()[x1][i]<91){moves.push_back(x1); moves.push_back(i); break;}
					else if(96<getMBoardArr()[x1][i]<123){break;}
				}
				else if(getMBoardArr()[x1][y1] == 'R'){
					if(96<getMBoardArr()[x1][i]<123){moves.push_back(x1); moves.push_back(i); break;}
					else if(64<getMBoardArr()[x1][i]<91){break;}
				}
			}
			else if(getMBoardArr()[x1][i] == '.'){
				moves.push_back(i); moves.push_back(y1);
			}
		}
		
		for(int i = y1+1; i < 8; i++){ // 우로 이동
			if(getMBoardArr()[x1][i] != '.'){
				if(getMBoardArr()[x1][y1] == 'r'){
					if(64<getMBoardArr()[x1][i]<91){moves.push_back(x1); moves.push_back(i); break;}
					else if(96<getMBoardArr()[x1][i]<123){break;}
				}
				else if(getMBoardArr()[x1][y1] == 'R'){
					if(96<getMBoardArr()[x1][i]<123){moves.push_back(x1); moves.push_back(i); break;}
					else if(64<getMBoardArr()[x1][i]<91){break;}
				}
			}
			else if(getMBoardArr()[x1][i] == '.'){
				moves.push_back(i); moves.push_back(y1);
			}
		}
	}
//	----------------------------------------------------------------------------------------- knight
	
	else if(getMBoardArr()[x1][y1] == 'n' || getMBoardArr()[x1][y1] == 'N'){
	
		if(getMBoardArr()[x1][y1] == 'n'){
			if(x1+2>=0 || y1-1>=0 || x1+2<8 || y1-1<8){
				if(64< getMBoardArr()[x1+2][y1-1] <91){moves.push_back(x1+2); moves.push_back(y1-1);}
			}
		}
		if(getMBoardArr()[x1][y1] == 'N'){
			if(x1+2>=0 || y1-1>=0 || x1+2<8 || y1-1<8){
				if(96<getMBoardArr()[x1+2][y1-1]<123){moves.push_back(x1+2); moves.push_back(y1-1);}
			}
		}
		
		if(getMBoardArr()[x1][y1] == 'n'){
			if(x1+2<8 || y1+1<8 || x1+2>=0 || y1+1>=0){
				if(64<getMBoardArr()[x1+2][y1+1]<91){moves.push_back(x1+2); moves.push_back(y1+1); }
			}
		}
		if(getMBoardArr()[x1][y1] == 'N'){
			if(x1+2<8 || y1+1<8 || x1+2>=0 || y1+1>=0){
				if(96<getMBoardArr()[x1+2][y1+1]<123){moves.push_back(x1+2); moves.push_back(y1+1);}
			}
		}
	
		if(getMBoardArr()[x1][y1] == 'n'){
			if(x1-2<8 || y1-1<8 || x1-2>=0 || y1-1>=0){
				if(64<getMBoardArr()[x1-2][y1-1]<91){moves.push_back(x1-2); moves.push_back(y1-1); }
			}
		}
		if(getMBoardArr()[x1][y1] == 'N'){
			if(x1-2<8 || y1-1<8 || x1-2>=0 || y1-1>=0){
				if(96<getMBoardArr()[x1-2][y1-1]<123){moves.push_back(x1-2); moves.push_back(y1-1); }
			}
		}
	
		if(getMBoardArr()[x1][y1] == 'n'){
			if(x1-2<8 || y1+1<8 || x1-2>=0 || y1+1>=0){
				if(64<getMBoardArr()[x1-2][y1+1]<91){moves.push_back(x1-2); moves.push_back(y1+1); }
			}
		}
		if(getMBoardArr()[x1][y1] == 'N'){
			if(x1-2<8 || y1+1<8 || x1-2>=0 || y1+1>=0){
				if(96<getMBoardArr()[x1-2][y1+1]<123){moves.push_back(x1-2); moves.push_back(y1+1); }
			}
		}
		
		if(getMBoardArr()[x1][y1] == 'n'){
			if(x1+1<8 || y1-2<8 || x1+1>=0 || y1-2>=0){
				if(64<getMBoardArr()[x1+1][y1-2]<91){moves.push_back(x1+1); moves.push_back(y1-2); }
			}
		}
		if(getMBoardArr()[x1][y1] == 'N'){
			if(x1+1<8 || y1-2<8 || x1+1>=0 || y1-2>=0){
				if(96<getMBoardArr()[x1+1][y1-2]<123){moves.push_back(x1+1); moves.push_back(y1-2); }
			}
		}
		
		if(getMBoardArr()[x1][y1] == 'n'){
			if(x1-1<8 || y1-2<8 || x1-1>=0 || y1-2>=0){
				if(64<getMBoardArr()[x1-1][y1-2]<91){moves.push_back(x1-1); moves.push_back(y1-2); }
			}
		}
		if(getMBoardArr()[x1][y1] == 'N'){
			if(x1-1<8 || y1-2<8 || x1-1>=0 || y1-2>=0){
				if(96<getMBoardArr()[x1-1][y1-2]<123){moves.push_back(x1-1); moves.push_back(y1-2); }
			}
		}
		
		if(getMBoardArr()[x1][y1] == 'n'){
			if(x1+1<8 || y1+2<8 || x1+1>=0 || y1+2>=0){
				if(64<getMBoardArr()[x1+1][y1+2]<91){moves.push_back(x1+1); moves.push_back(y1+2); }
			}
		}
		if(getMBoardArr()[x1][y1] == 'N'){
			if(x1+1<8 || y1+2<8 || x1+1>=0 || y1+2>=0){
				if(96<getMBoardArr()[x1+1][y1+2]<123){moves.push_back(x1+1); moves.push_back(y1+2); }
			}
		}
		
		if(getMBoardArr()[x1][y1] == 'n'){
			if(x1-1<8 || y1+2<8 || x1-1>=0 || y1+2>=0){
				if(64<getMBoardArr()[x1-1][y1+2]<91){moves.push_back(x1-1); moves.push_back(y1+2); }
			}
		}
		if(getMBoardArr()[x1][y1] == 'N'){
			if(x1-1<8 || y1+2<8 || x1-1>=0 || y1+2>=0){
				if(96<getMBoardArr()[x1-1][y1+2]<123){moves.push_back(x1-1); moves.push_back(y1+2); }
			}
		}
		
	}
	
//	----------------------------------------------------------------------------------------- bishop 하는중 피아 구별하기
	else if(getMBoardArr()[x1][y1] == 'b' || getMBoardArr()[x1][y1] == 'B'){
		for(int i = 1; i<4;i++){
			if(getMBoardArr()[x1+i][y1+i] == '.'){moves.push_back(x1+i); moves.push_back(y1+i);}
			else if(getMBoardArr()[x1+i][y1+i] != '.'){
				moves.push_back(x1+i); moves.push_back(y1+i); break;}
		}
		for(int i = 1; i<4;i++){
			if(getMBoardArr()[x1+i][y1-i] == '.'){moves.push_back(x1+i); moves.push_back(y1-i);}
			else if(getMBoardArr()[x1+i][y1-i] != '.'){moves.push_back(x1+i); moves.push_back(y1-i); break;}
		}
		for(int i = 1; i<4;i++){
			if(getMBoardArr()[x1-i][y1+i] == '.'){moves.push_back(x1-i); moves.push_back(y1+i);}
			else if(getMBoardArr()[x1-i][y1+i] != '.'){moves.push_back(x1-i); moves.push_back(y1+i); break;}
			
		}
		for(int i = 1; i<4;i++){	
			if(getMBoardArr()[x1-i][y1-i] == '.'){moves.push_back(x1-i); moves.push_back(y1-i);}
			else if(getMBoardArr()[x1-i][y1-i] != '.'){moves.push_back(x1-i); moves.push_back(y1-i); break;}
		}
	}
//	----------------------------------------------------------------------------------------- queen (rook+bishop)
	
	else if(getMBoardArr()[x1][y1] == 'q' || getMBoardArr()[x1][y1] == 'Q'){
		for(int i = x1-1; i > 0; i--){
			moves.push_back(i); moves.push_back(y1);
			if(getMBoardArr()[i][y1] != '.'){moves.push_back(i); moves.push_back(y1); break;}
		}
		for(int i = x1+1; i < 8; i++){
			moves.push_back(i); moves.push_back(y1);
			if(getMBoardArr()[i][y1] != '.'){moves.push_back(i); moves.push_back(y1); break;}
		}
		
		for(int i = y1-1; i > 0; i--){
			moves.push_back(x1); moves.push_back(i);
			if(getMBoardArr()[x1][i] != '.'){moves.push_back(x1); moves.push_back(i); break;}
		}
		for(int i = y1+1; i < 8; i++){
			moves.push_back(x1); moves.push_back(i);
		if(getMBoardArr()[x1][i] != '.'){moves.push_back(x1); moves.push_back(i); break;}
		}
		for(int i = 1; i<4;i++){
			moves.push_back(x1+i); moves.push_back(y1+i);
			if(getMBoardArr()[x1+i][y1+i] != '.'){moves.push_back(x1+i); moves.push_back(y1+i); break;}
		}
		for(int i = 1; i<4;i++){
			moves.push_back(x1+i); moves.push_back(y1-i);
			if(getMBoardArr()[x1+i][y1-i] != '.'){moves.push_back(x1+i); moves.push_back(y1-i); break;}
		}
		for(int i = 1; i<4;i++){
			moves.push_back(x1-i); moves.push_back(y1+i);
			if(getMBoardArr()[x1-i][y1+i] != '.'){moves.push_back(x1-i); moves.push_back(y1+i); break;}
			
		}
		for(int i = 1; i<4;i++){
			moves.push_back(x1-i); moves.push_back(y1-i);
			if(getMBoardArr()[x1-i][y1-i] != '.'){moves.push_back(x1-i); moves.push_back(y1-i); break;}
		}
	}
//	----------------------------------------------------------------------------------------- king
	
	else if(getMBoardArr()[x1][y1] == 'k' || getMBoardArr()[x1][y1] == 'K'){
		moves.push_back(x1+1); moves.push_back(y1);
		moves.push_back(x1+1); moves.push_back(y1+1);
		moves.push_back(x1+1); moves.push_back(y1-1);
		moves.push_back(x1); moves.push_back(y1+1);
		moves.push_back(x1); moves.push_back(y1-1);
		moves.push_back(x1-1); moves.push_back(y1);
		moves.push_back(x1-1); moves.push_back(y1+1);
		moves.push_back(x1-1); moves.push_back(y1-1);
	}
}
vector<int> Game::getMoves(){
	return moves;
}
void Game::showmoves(){
	
}