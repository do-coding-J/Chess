#include <cstring>
#include "Chess.h"

class Game: public Chess{
	public:
		Game(){
			GameInit();
		}
	
		void GameInit(){
			memcpy(board, InitialBoard, sizeof(char) *8 *8);
			mturn = 1;
			mturn = turn::White_;
		}
	
		void whosturn(){
			
		}
	
	private:
		char board[8][8];
		bool mturn;
		
};
