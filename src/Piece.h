#pragma once
#include <iostream>
#include <string>
#include <array>


class Piece{
	public:
		Piece();
		Piece(const std::string& name, const std::string& color, int posX, int posY);
		~Piece();
	
	std::string& getMName();
	
	std::string& getMColor();
	
	void dead();
	bool isAlive();
	
	void setMPosArr(int xpos, int ypos);
	
	private:
		private:
		std::string mName;
		std::string mColor;
		int mPosX;
		int mPosY;
		bool mAlive = 1;
};