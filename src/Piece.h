#pragma once
#include <iostream>
#include <string>
#include <array>

using namespace std;

class Piece{
	public:
		array<size_t,2> Pos = {0};
	
		void setMName(const string& name);
		string& getMName();
		
		void setMColor(const string& color);
		string& getMColor();
	
		void dead();
		bool isAlive();
	
		void setMPos(size_t xpos, size_t ypos);

	
	private:
		string mName;
		string mColor;
		bool mAlive = 1;
};
