#pragma once
#include <iostream>
#include <string>
#include <array>


class Piece{
	public:
		Piece();
		Piece(const std::string& name, const std::string& color, int posX, int posY); //:mName(name),mColor(color),mPosX(posX), mPosY(posY)
		~Piece();
	
	std::string& getMName();
	
	std::string& getMColor();
	
	bool isAlive();
	void dead();
	
	void setMPosArr();
	int* getMPosArr();
	
	private:
		private:
		std::string mName;
		std::string mColor;
		int mPosX;
		int mPosY;
		int mPosArr[2];
		bool mAlive = 1;
};