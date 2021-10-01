#pragma once
#include<iostream>

class Piece { //find what piece it is.
private:
	bool is_dead;
	char mSelected;
	std::string mDescribe;

public:
	struct position
	{
		int cor_x; //horizontal
		int cor_y; //vertical
	}now_pos;

	Piece();
	Piece(char s, int x, int y);

	void setDescribe(char s);
	std::string getDescribe();

	void set_now_pos(int x, int y);
	position get_now_pos();

};