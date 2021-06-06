#pragma once
#include <iostream>
#include <string>
#include <array>


class Piece{
	public:

		Piece(const std::string& name, const std::string& color, array<int,2> posArr;
		~Piece();

		void setMName(const std::string& name);
		std::string& getMName();
		
		void setMColor(const std::string& color);
		std::string& getMColor();
	
		void dead();
		bool isAlive();
	
		void setMPosArr(int xpos, int ypos);
		int* getMPosArr();
	
	private:
		std::string mName;
		std::string mColor;
		bool mAlive = 1;
		int mPosArr[2] = {0, 0};
};
