#pragma once
#include <iostream>
#include <string>
#include <array>

using namespace std;

class Piece{
	public:
		void setMName(const string& name);
		string& getMName();
		
		void setMColor(const string& color);
		string& getMColor();
	
		void dead();
		bool isAlive();
	
		void setMPosArr(int xpos, int ypos);
		int* getMPosArr();
	
	private:
		string mName;
		string mColor;
		bool mAlive = 1;
		int mPosArr[2] = {0, 0};
};
