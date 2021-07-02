#pragma once
#include <iostream>
#include <string>

class Piece{
	public:
		Piece();
		~Piece();
	
		void setPiece(std::string n, std::string c);
	
		void setMName();
		void setMName(std::string name);
		std::string getMName();
	
		void setMColor(std::string color);
		bool getMColor();
		
		char getMInitial();
	
		
	private:
		std::string mName;
		bool mColor = true; // black : true, white : false
		char mInitial;
};