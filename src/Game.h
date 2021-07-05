#include <cstring>
#include "Chess.h"

using namespace std;

class Game: public Chess{
	public:
		Game(){
			Chess chess;
			Game_Init();
		}
	
		Chess::position from;
		Chess::position to;
	
		void Game_Init(){
			memcpy(board, InitialBoard, sizeof(char) *8 *8);
			mturn = turn::White_;
		}
	
		void change_turn(){
			if(mturn == 0){
				mturn == 1;
			}
			else if(mturn == 1){
				mturn == 0;
			}
		}
	
		char get_piece_at_position(int col, int row){
			return board[col][row];
		}
	
		void get_from(){
			string movefrom;
			
			cin >> movefrom;
			from.col = movefrom[0];
			from.row = movefrom[1];	
		}
	
		void get_to(){
			string movefrom;
			
			cin >> movefrom;
			to.col = movefrom[0];
			to.row = movefrom[1];	
		}
	
		void is_movable(position from, position to){
			bool possible = false;
			char mSelected = board[from.col][from.row];
			
			switch(toupper(mSelected)){
				case 'P':{
					
				}
				case 'R':{
					
				}
				case 'N':{
					
				}
				case 'B':{
					
				}
				case 'Q':{
					
				}
				case 'K':{
					
				}
				default:{
					
				}
				break;
			}
		}
	
		void view_Board(){
			for(int i=0;i<8;i++){
				for(int j=0;j<8;j++){
					cout << board[i][j] << " ";
				}
				cout << "\n";
			}
		}
	

	
	private:
		char board[8][8];
		bool mturn;
		
};
