#pragma once
#include <iostream>
#include <string>

using namespace std;

class piecetype{
	// color, on board position, is alive?
	public:
		void setColor(std::string& Color);
		const std::string& getColor() const;
		void setLocation(size_t setPos[2]);
		const size_t getPos() const;
		void dead();
		
	private:
		size_t mPos[2];
		const std::string& mColor;
		bool mAlive = 1;
};