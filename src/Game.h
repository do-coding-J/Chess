#pragma once
#include <vector>
#include "Board.h"

class Game: public Board{
	public:
	
		void setLog(int a, int b, int c, int d);
	
		std::vector<int> getLog();

		void setPoB();
	
		void setFrom(int a, int b);
		void setTo(int c, int d);
	
		// 여기에 기물 별 이동 메소드
		void movesPawn();
		void movesRook();
		void movesKnight();
		void movesBishop();
		void movesQueen();
		void movesKing();
		
		void calcmoves(); // switch case 사용해서 정리
		
		std::vector<int> getMoves();
	
	private:
		std::vector<int> Log;
		std::vector<int> moves;
		int x1,x2,y1,y2;
		char temp;
};