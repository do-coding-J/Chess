#include "piece.h"

Piece::Piece()
{
}

Piece::Piece(char s, int x, int y)
{
	now_pos.cor_x = x;
	now_pos.cor_y = y;
	mSelected = s;
	is_dead = false;
}

void Piece::setDescribe(char s)
{
	if (s == 0x20) mDescribe = "Empty Space";
	else {
		mSelected = s;
		//UpperCase = black, lowercase = white
		if (isupper(s)) mDescribe = "black ";
		else mDescribe = "white ";

		switch (toupper(s)) {
		case 'P':
			mDescribe += "pawn";
			break;
		case 'R':
			mDescribe += "rook";
			break;
		case 'N':
			mDescribe += "knight";
			break;
		case 'B':
			mDescribe += "bishop";
			break;
		case 'Q':
			mDescribe += "queen";
			break;
		case 'K':
			mDescribe += "king";
			break;
		default:
			break;
		}
	}
}

std::string Piece::getDescribe()
{
	return mDescribe;
}

void Piece::set_now_pos(int x, int y)
{
	now_pos.cor_x = x;
	now_pos.cor_y = y;
}

Piece::position Piece::get_now_pos()
{
	return now_pos;
}
