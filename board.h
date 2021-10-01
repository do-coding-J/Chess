#pragma once
#include<iostream>
#include<string.h>

class Board {
private:
	
	const char initial_board[8][8] =
	{
		{ 'R',  'N',  'B',  'Q',  'K',  'B',  'N',  'R' },
		{ 'P',  'P',  'P',  'P',  'P',  'P',  'P',  'P' },
		{ 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20 },
		{ 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20 },
		{ 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20 },
		{ 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20 },
		{ 'p',  'p',  'p',  'p',  'p',  'p',  'p',  'p' },
		{ 'r',  'n',  'b',  'q',  'k',  'b',  'n',  'r' },
	};
public:
	Board();
	char playing_board[8][8];

	char get_piece_abbreviation(int x, int y);

	void move_piece_abbreviation(int x1, int y1, int x2, int y2);

	void board_display();
};