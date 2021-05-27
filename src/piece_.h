#pragma once
#include <iostream>
#include <string>

using namespace std;

class piecetype{
	// color, on board position, is alive?
	public:
		piecetype();
		void setColor(const string& color);
		const string& getColor();
		void setPos(int X, int Y);
		int getPos() const;
		void dead();
		bool isAlive();
		
	private:
		int posX = 0;
		int posY = 0;
		int mPos[1];
		const std::string& mColor;
		bool mAlive = true;
};