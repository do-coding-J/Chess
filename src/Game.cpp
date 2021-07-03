#include "Game.h"
#include <iostream>
#include <vector>

using namespace std;

void Game::setLog(int a, int b, int c, int d){
	Log.push_back(a);
	Log.push_back(b);
	Log.push_back(c);
	Log.push_back(d);
}
	
vector<int> Game::getLog(){
	return Log;
}

void Game::setPoB(){ 
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
void Game::setTo(int c, int d){
	x2 = c-1; y2 = d-1;
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
//	----------------------------------------------------------------------------------------- rook 
//	피아식별 x 
	
	else if(getMBoardArr()[x1][y1] == 'r' || getMBoardArr()[x1][y1] == 'R'){
		
		for(int i = x1-1; i >= 0; i--){ // 위로 이동
			if(getMBoardArr()[i][y1] != '.'){
				if(getMBoardArr()[x1][y1] == 'r'){
					if('A' <= getMBoardArr()[i][y1] <= 'Z'){moves.push_back(i); moves.push_back(y1); break;}
					else if('a' <= getMBoardArr()[i][y1] <= 'z'){break;}
				}
				else if(getMBoardArr()[x1][y1] == 'R'){
					if('a' <= getMBoardArr()[i][y1] <= 'z'){moves.push_back(i); moves.push_back(y1); break;}
					else if('A' <= getMBoardArr()[i][y1] <= 'Z'){break;}
				}
			}
			else if(getMBoardArr()[i][y1] == '.'){
				moves.push_back(i); moves.push_back(y1);
			}
		}
		
		for(int i = x1+1; i < 8; i++){ // 아래로 이동
			if(getMBoardArr()[i][y1] != '.'){
				if(getMBoardArr()[x1][y1] == 'r'){
					if('A' <= getMBoardArr()[i][y1] <= 'Z'){moves.push_back(i); moves.push_back(y1); break;}
					else if('a' <= getMBoardArr()[i][y1] <= 'z'){break;}
				}
				else if(getMBoardArr()[x1][y1] == 'R'){
					if('a' <= getMBoardArr()[i][y1] <= 'z'){moves.push_back(i); moves.push_back(y1); break;}
					else if('A' <= getMBoardArr()[i][y1] <= 'Z'){break;}
				}
			}
			else if(getMBoardArr()[i][y1] == '.'){
				moves.push_back(i); moves.push_back(y1);
			}
		}
		
		for(int i = y1-1; i >= 0; i--){ // 왼쪽으로 이동
			if(getMBoardArr()[x1][i] != '.'){
				if(getMBoardArr()[x1][y1] == 'r'){
					if('A' <= getMBoardArr()[x1][i] <= 'Z'){moves.push_back(x1); moves.push_back(i); break;}
					else if('a' <= getMBoardArr()[x1][i] <= 'z'){break;}
				}
				else if(getMBoardArr()[x1][y1] == 'R'){
					if('a' <= getMBoardArr()[x1][i] <= 'z'){moves.push_back(x1); moves.push_back(i); break;}
					else if('A' <= getMBoardArr()[x1][i] <= 'Z'){break;}
				}
			}
			else if(getMBoardArr()[x1][i] == '.'){
				moves.push_back(x1); moves.push_back(i);
			}
		}
		
		for(int i = y1+1; i < 8; i++){ // 우로 이동
			if(getMBoardArr()[x1][i] != '.'){
				if(getMBoardArr()[x1][y1] == 'r'){
					if('A' <= getMBoardArr()[x1][i] <= 'Z'){moves.push_back(x1); moves.push_back(i); break;}
					else if('a' <= getMBoardArr()[x1][i] <= 'z'){break;}
				}
				else if(getMBoardArr()[x1][y1] == 'R'){
					if('a' <= getMBoardArr()[x1][i] <= 'z'){moves.push_back(x1); moves.push_back(i); break;}
					else if('A' <= getMBoardArr()[x1][i] <= 'Z'){break;}
				}
			}
			else if(getMBoardArr()[x1][i] == '.'){
				moves.push_back(x1); moves.push_back(i);
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
	
//	----------------------------------------------------------------------------------------- bishop 
//  피아 구별 x, -1?????
	else if(getMBoardArr()[x1][y1] == 'b' || getMBoardArr()[x1][y1] == 'B'){
		if(getMBoardArr()[x1][y1] == 'b'){
			for(int i = 1; i<9;i++){  // 우 하
				if(getMBoardArr()[x1+i][y1+i] == '.'){
					if((0 <= x1+i < 8) && (0 <= y1+i < 8)){
						moves.push_back(x1+i);
						moves.push_back(y1+i);
					}
				}
				else if(getMBoardArr()[x1+i][y1+i] != '.'){
					if((0 <= x1+i < 8) && (0 <= y1+i < 8)){
						if('a' <= getMBoardArr()[x1+i][y1+i] <= 'z'){
							break;
						}
						else if('A' <= getMBoardArr()[x1+i][y1+i] <= 'Z'){
							moves.push_back(x1+i); 
							moves.push_back(y1+i); 
							break;
						}
					}
				}
			}
			for(int i = 1; i<9;i++){ // 좌 하
				if(getMBoardArr()[x1+i][y1-i] == '.'){
					if((0 <= x1+i < 8) && (0 <= y1-i < 8)){
						moves.push_back(x1+i); 
						moves.push_back(y1-i);
					}
				}
				else if(getMBoardArr()[x1+i][y1-i] != '.'){
					if((0 <= x1+i < 8) && (0 <= y1-i < 8)){
						if('a' <= getMBoardArr()[x1+i][y1+i] <= 'z'){
							break;
						}
						else if('A' <= getMBoardArr()[x1+i][y1+i] <= 'Z'){
							moves.push_back(x1+i); 
							moves.push_back(y1-i); 
							break;
						}
					}
				}
			}
			for(int i = 1; i<9;i++){ // 우 상
				if(getMBoardArr()[x1-i][y1+i] == '.'){
					if((0 <= x1-i < 8) && (0 <= y1+i < 8)){
						moves.push_back(x1-i);
						moves.push_back(y1+i);
					}
				}
				else if(getMBoardArr()[x1-i][y1+i] != '.'){
					if((0 <= x1-i < 8) && (0 <= y1+i < 8)){
						if('a' <= getMBoardArr()[x1+i][y1+i] <= 'z'){
							break;
						}
						else if('A' <= getMBoardArr()[x1+i][y1+i] <= 'Z'){
							moves.push_back(x1-i); 
							moves.push_back(y1+i); 
							break;
						}
					}
				}
			}
			for(int i = 1; i<9;i++){ // 좌 상	
				if(getMBoardArr()[x1-i][y1-i] == '.'){
					if((0 <= x1-i < 8) && (0 <= y1-i < 8)){
						moves.push_back(x1-i); 
						moves.push_back(y1-i);
					}
				}
				else if(getMBoardArr()[x1-i][y1-i] != '.'){
					if((0 <= x1-i < 8) && (0 <= y1-i < 8)){
						if('a' <= getMBoardArr()[x1+i][y1+i] <= 'z'){
							break;
						}
						else if('A' <= getMBoardArr()[x1+i][y1+i] <= 'Z'){
							moves.push_back(x1-i); 
							moves.push_back(y1-i); 
							break;
						}
					}
				}
			}
		}
		if(getMBoardArr()[x1][y1] == 'B'){
			for(int i = 1; i<9;i++){  // 우 하
				if(getMBoardArr()[x1+i][y1+i] == '.'){
					if((0 <= x1+i < 8) && (0 <= y1+i < 8)){
						moves.push_back(x1+i);
						moves.push_back(y1+i);
					}
				}
				else if(getMBoardArr()[x1+i][y1+i] != '.'){
					if((0 <= x1+i < 8) && (0 <= y1+i < 8)){
						if('A' <= getMBoardArr()[x1+i][y1+i] <= 'Z'){
							break;
						}
						else if('a' <= getMBoardArr()[x1+i][y1+i] <= 'z'){
							moves.push_back(x1+i); 
							moves.push_back(y1+i); 
							break;
						}
					}
				}
			}
			for(int i = 1; i<9;i++){ // 좌 하
				if(getMBoardArr()[x1+i][y1-i] == '.'){
					if((0 <= x1+i < 8) && (0 <= y1-i < 8)){
						moves.push_back(x1+i); 
						moves.push_back(y1-i);
					}
				}
				else if(getMBoardArr()[x1+i][y1-i] != '.'){
					if((0 <= x1+i < 8) && (0 <= y1-i < 8)){
						if('A' <= getMBoardArr()[x1+i][y1+i] <= 'Z'){
							break;
						}
						else if('a' <= getMBoardArr()[x1+i][y1+i] <= 'z'){
							moves.push_back(x1+i); 
							moves.push_back(y1-i); 
							break;
						}
					}
				}
			}
			for(int i = 1; i<9;i++){ // 우 상
				if(getMBoardArr()[x1-i][y1+i] == '.'){
					if((0 <= x1-i < 8) && (0 <= y1+i < 8)){
						moves.push_back(x1-i);
						moves.push_back(y1+i);
					}
				}
				else if(getMBoardArr()[x1-i][y1+i] != '.'){
					if((0 <= x1-i < 8) && (0 <= y1+i < 8)){
						if('A' <= getMBoardArr()[x1+i][y1+i] <= 'Z'){
							break;
						}
						else if('a' <= getMBoardArr()[x1+i][y1+i] <= 'z'){
							moves.push_back(x1-i); 
							moves.push_back(y1+i); 
							break;
						}
					}
				}
			}
			for(int i = 1; i<9;i++){ // 좌 상	
				if(getMBoardArr()[x1-i][y1-i] == '.'){
					if((0 <= x1-i < 8) && (0 <= y1-i < 8)){
						moves.push_back(x1-i); 
						moves.push_back(y1-i);
					}
				}
				else if(getMBoardArr()[x1-i][y1-i] != '.'){
					if((0 <= x1-i < 8) && (0 <= y1-i < 8)){
						if('A' <= getMBoardArr()[x1+i][y1+i] <= 'Z'){
							break;
						}
						else if('a' <= getMBoardArr()[x1+i][y1+i] <= 'z'){
							moves.push_back(x1-i); 
							moves.push_back(y1-i); 
							break;
						}
					}
				}
			}
		}
	}
//	----------------------------------------------------------------------------------------- queen 
//	(rook+bishop)
	
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