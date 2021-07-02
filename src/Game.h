#pragma once
#include <vector>
#include "Board.h"

class Game: public Board{
	public:
	
		void pieceDeclare();
	
		void setLog(int a, int b, int c, int d);
	
		std::vector<int> getLog();

		void setPoB(int a, int b, int c, int d);
	
		void setFrom(int a, int b);
	
		// 여기에 기물 별 이동 메소드
		
		void calcmoves(); // switch case 사용해서 정리
		
	
		std::vector<int> getMoves();
	
		void showmoves();
	private:
	//	Piece piece[12];
		std::vector<int> Log;
		std::vector<int> moves;
		int x1,x2,y1,y2;
		char temp;
};