#pragma once
#include <iostream>
#include <string>

using namespace std;

class Piece{
	public:
		void setMName(const string& name);
		string& getMName();
	private:
		string mName;
};